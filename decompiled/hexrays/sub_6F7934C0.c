signed int __cdecl sub_6F7934C0(int a1, int a2, char *a3, int a4)
{
  char *v4; // edx@1
  char *v5; // ebx@1
  int v6; // eax@1
  char v7; // al@2

  v4 = *(char **)(a1 + 8);
  v5 = *(char **)a1;
  v6 = a4;
  if ( (unsigned int)v4 > *(_DWORD *)a1 )
  {
    do
    {
      v7 = *v5;
      if ( (unsigned __int8)(*v5 - 12) > 1u && (unsigned __int8)(*v5 - 9) > 1u && v7 & 0xDF )
      {
        if ( v7 != 37 )
          break;
        if ( v4 > v5 )
        {
          while ( v4 != ++v5 )
          {
            if ( *v5 == 13 || *v5 == 10 )
              goto LABEL_11;
          }
          v5 = *(char **)(a1 + 8);
        }
      }
LABEL_11:
      ++v5;
    }
    while ( v4 > v5 );
    v6 = a4;
  }
  *(_DWORD *)a1 = v5;
  return sub_6F792DD0((unsigned int *)a1, v4, a2, a3, v6);
}
