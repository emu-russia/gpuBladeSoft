int sub_6F684C80()
{
  void *v0; // eax@1
  void *v1; // ebx@2
  _DWORD *v2; // eax@2
  int result; // eax@2
  char v6; // [sp+38h] [bp+Ch]@0

  v0 = malloc(0x118u);
  if ( !v0 )
  {
    nullsub_10();
    exit(1);
  }
  v1 = v0;
  *((_DWORD *)v0 + 2) = -16776961;
  *(float *)v0 = 0.0;
  *((float *)v0 + 1) = 0.0;
  *((double *)v0 + 2) = 2.5;
  j__vsnprintf((char *)v0 + 24, 0x100u, "Not implemented: internal resolution changing 'on fly'", &v6);
  v2 = sub_6F961B60(0xCu);
  v2[2] = v1;
  result = sub_6F9549A0((int)v2, (int)&dword_6FBBFDAC);
  ++dword_6FBBFDB4;
  return result;
}
