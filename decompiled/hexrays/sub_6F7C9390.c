__int16 __cdecl sub_6F7C9390(int a1)
{
  int v1; // eax@2
  int v2; // eax@3

  if ( a1 < 0 )
  {
    v2 = 0x8000 - a1;
    LOWORD(v2) = 0;
    v1 = -v2;
  }
  else
  {
    LOWORD(v1) = 0;
  }
  return v1;
}
