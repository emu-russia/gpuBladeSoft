unsigned int __cdecl sub_6F760050(int a1)
{
  unsigned int v1; // edx@1
  int *v2; // ecx@1
  int *v3; // ebx@1
  unsigned int result; // eax@6

  v1 = 0;
  v2 = &dword_7035CC40[34 * a1];
  v3 = &dword_7035CC40[34 * a1];
  while ( 1 )
  {
    result = v1;
    if ( v1 > 0x1F )
      break;
    if ( *(_BYTE *)v2 && (!v3[32] || !*((_BYTE *)v2 + 64)) )
      return result;
LABEL_5:
    ++v1;
    v2 = (int *)((char *)v2 + 1);
  }
  if ( *(_BYTE *)v2 > 0x40u && (!v3[32] || !*((_BYTE *)v2 + 64)) )
    return result;
  if ( v1 != 63 )
    goto LABEL_5;
  return -1;
}
