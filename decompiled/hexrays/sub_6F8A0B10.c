int sub_6F8A0B10()
{
  int result; // eax@1
  unsigned int v1; // eax@2
  void *v2; // esp@2
  char v25; // [sp+0h] [bp-48h]@0
  int v27; // [sp+1Ch] [bp-2Ch]@4

  result = dword_70372B54;
  if ( !dword_70372B54 )
  {
    dword_70372B54 = 1;
    v1 = 16 * ((unsigned int)(20 * sub_6F8A11B0() + 27) >> 4);
    sub_6F8A13B0(v1, v25);
    dword_70372B58 = 0;
    v2 = alloca(v1);
    dword_70372B5C = ((unsigned int)&v27 + 3) & 0xFFFFFFF0;
    result = 0;
  }
  return result;
}
