long double __cdecl sub_6F8ADBE0(_TBYTE a1)
{
  char v3; // c2@1
  char v4; // c0@1
  long double result; // st7@3

  _ST6 = *(double *)&a1;
  __asm { fxam }
  if ( !v4 || v3 )
  {
    if ( fabs(*(double *)&a1 - 1.0) > 0.29 )
      result = __FYL2X__(*(long double *)&a1, 1.0);
    else
      result = __FYL2XP1__(*(double *)&a1 - 1.0, 1.0);
  }
  else
  {
    result = *(double *)&a1;
  }
  return result;
}
