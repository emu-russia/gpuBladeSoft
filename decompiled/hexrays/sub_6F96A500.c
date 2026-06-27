int sub_6F96A500()
{
  _DWORD *v0; // eax@1

  sub_6F8B33A0((int *)&unk_6FB48D54, 0);
  dword_6FB48D60 = 18944;
  v0 = malloc(0x4A00u);
  dword_6FB48D5C = (int)v0;
  if ( v0 )
  {
    dword_6FB48D58 = (int)v0;
    *v0 = 18944;
    v0[1] = 0;
  }
  else
  {
    dword_6FB48D60 = 0;
    dword_6FB48D58 = 0;
  }
  return sub_6F6813F0((int)sub_6F9630E0);
}
