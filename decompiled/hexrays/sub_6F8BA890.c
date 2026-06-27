__int16 __thiscall sub_6F8BA890(int this, wchar_t a2)
{
  int v2; // eax@2

  if ( a2 == -1 )
    v2 = -(fflush(*(FILE **)(this + 32)) != 0);
  else
    LOWORD(v2) = putwc(a2, *(FILE **)(this + 32));
  return v2;
}
