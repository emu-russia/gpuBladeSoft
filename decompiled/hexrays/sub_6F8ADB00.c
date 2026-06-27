long double __cdecl sub_6F8ADB00(_TBYTE a1)
{
  __int16 v1; // fps@1
  long double result; // st7@1

  result = *(double *)&a1;
  __asm { fxam }
  if ( (HIBYTE(v1) & 0x45) == 5 )
  {
    if ( v1 & 0x200 )
      result = 0.0;
  }
  else
  {
    _ST6 = *(double *)&a1;
    __asm { frndint }
    result = __F2XM1__(*(double *)&a1 - _ST6) + 1.0;
  }
  return result;
}
