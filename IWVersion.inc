// remove the . from the define that corresponds to your IW version.

{.$DEFINE IWVERSION5}
{.$DEFINE IWVERSION51}
{.$DEFINE IWVERSION60}
{.$DEFINE IWVERSION70}
{$DEFINE IWVERSION72}


// Don't change these declarations.

{$IFDEF IWVERSION5}
  {$DEFINE IWVERCLASS5}
{$ENDIF}

{$IFDEF IWVERSION51}
  {$DEFINE IWVERCLASS5}
{$ENDIF}

{$IFDEF IWVERSION60}
  {$DEFINE IWVERCLASS6}
{$ENDIF}

{$IFDEF IWVERSION72}
  {$DEFINE IWVERSION70}
{$ENDIF}
