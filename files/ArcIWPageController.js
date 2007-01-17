function clickIE() {
  if (document.all) {(message);return false;}
}

function clickNS(e) {
  if (document.layers||(document.getElementById&&!document.all)) {
    if (e.which==2||e.which==3) {
      (message);return false;
    }
  }
}

function disableselect(e){
  return false
}

function reEnable(){
  return true
}
