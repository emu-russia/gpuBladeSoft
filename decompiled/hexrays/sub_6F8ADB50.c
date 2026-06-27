double __cdecl sub_6F8ADB50(double a1)
{
  double result; // st7@1
  char v3; // c0@1
  char v4; // al@1
  char v7; // c0@5
  char v8; // al@5

  result = a1;
  __asm { fxam }
  v4 = v3;
  if ( !v3 )
  {
    if ( 0.0 == a1 )
      v4 = 1;
    if ( !v4 )
    {
      _ST6 = a1;
      __asm { fxam }
      v8 = v7;
      if ( v7 )
      {
        result = a1;
      }
      else
      {
        result = a1;
        if ( a1 == 0.0 )
          v8 = 1;
        if ( !v8 )
          return result;
      }
      *errno() = 34;
      return result;
    }
  }
  return result;
}
