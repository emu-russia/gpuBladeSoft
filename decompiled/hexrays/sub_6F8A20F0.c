double __cdecl sub_6F8A20F0(double a1, int a2)
{
  __int16 v4; // fps@3
  double result; // st7@4

  _ST6 = a1;
  __asm { frndint }
  if ( a2 )
    *(double *)a2 = _ST6;
  _ST5 = a1;
  __asm { fxam }
  if ( (v4 & 0x4500) == 1280 )
    result = 0.0;
  else
    result = a1 - _ST6;
  return result;
}
