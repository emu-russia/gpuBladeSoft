int __cdecl sub_6F96A890(int a1)
{
  int result; // eax@2
  int v2; // [sp+10h] [bp-200h]@2
  int v3; // [sp+28h] [bp-1E8h]@2
  int v4; // [sp+2Ch] [bp-1E4h]@2

  if ( a1 & 0x1000000 )
  {
    v4 = 0;
    _fxsave(&v2);
    result = v3;
    if ( v4 & 0x40 )
      result = v3 | 0x40;
  }
  else
  {
    result = _mm_getcsr();
  }
  BYTE1(result) |= 0x80u;
  _mm_setcsr(result);
  return result;
}
