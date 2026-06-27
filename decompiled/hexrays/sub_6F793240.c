int __cdecl sub_6F793240(int a1, int a2)
{
  char *v2; // ebx@1
  char v3; // al@2
  char *i; // [sp+Ch] [bp-20h]@1

  v2 = *(char **)a1;
  for ( i = *(char **)(a1 + 8); i > v2; ++v2 )
  {
    v3 = *v2;
    if ( (unsigned __int8)(*v2 - 12) > 1u && (unsigned __int8)(*v2 - 9) > 1u && v3 & 0xDF )
    {
      if ( v3 != 37 )
        break;
      if ( i > v2 )
      {
        while ( i != ++v2 )
        {
          if ( *v2 == 13 || *v2 == 10 )
            goto LABEL_11;
        }
        v2 = *(char **)(a1 + 8);
      }
    }
LABEL_11:
    ;
  }
  *(_DWORD *)a1 = v2;
  return sub_6F792040((_BYTE **)a1, i, a2);
}
