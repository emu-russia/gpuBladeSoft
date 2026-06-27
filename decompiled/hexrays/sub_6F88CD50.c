signed int __usercall sub_6F88CD50@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  int v2; // esi@1
  size_t v3; // edx@2
  int v4; // eax@3
  signed int result; // eax@4
  void *v6; // eax@5
  const void *v7; // ecx@5
  int v8; // eax@5
  int v9; // edi@8
  void *v10; // eax@8
  void *v11; // ebp@8
  void *v12; // eax@8

  v1 = a1;
  v2 = a1 + 84;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v9 = *(_DWORD *)(a1 + 28);
    v10 = malloc(*(_DWORD *)(a1 + 28));
    v11 = v10;
    *(_DWORD *)(v1 + 32) = v10;
    v12 = malloc(2 * v9);
    *(_DWORD *)(v1 + 36) = v12;
    if ( v11 )
    {
      if ( v12 )
      {
        *(_DWORD *)(v1 + 24) = v9;
        *(_DWORD *)(v1 + 116) = 0;
        *(_DWORD *)(v1 + 120) = 0;
        *(_DWORD *)(v1 + 124) = 0;
        *(_DWORD *)(v1 + 88) = 0;
        *(_DWORD *)(v1 + 84) = 0;
        if ( !sub_6F892E60(v2, 31, "1.2.8", 56) )
          goto LABEL_2;
        free(*(void **)(v1 + 36));
        free(*(void **)(v1 + 32));
        *(_DWORD *)(v1 + 24) = 0;
LABEL_12:
        sub_6F88C430(v1, -4, "out of memory");
        return -1;
      }
    }
    else
    {
      if ( !v12 )
        goto LABEL_12;
      free(v12);
      v11 = *(void **)(v1 + 32);
      if ( !v11 )
        goto LABEL_12;
    }
    free(v11);
    goto LABEL_12;
  }
LABEL_2:
  v3 = *(_DWORD *)(v1 + 88);
  if ( v3 > 1 )
    goto LABEL_3;
  result = sub_6F88CCC0(v1);
  if ( result != -1 )
  {
    v3 = *(_DWORD *)(v1 + 88);
    result = 0;
    if ( v3 )
    {
      if ( v3 <= 1 )
      {
        v3 = 1;
LABEL_4:
        result = *(_DWORD *)(v1 + 40);
        if ( result )
        {
          v6 = *(void **)(v1 + 36);
          v7 = *(const void **)(v1 + 84);
          *(_DWORD *)(v1 + 4) = v6;
          memcpy(v6, v7, v3);
          v8 = *(_DWORD *)(v1 + 88);
          *(_DWORD *)(v1 + 44) = 1;
          *(_DWORD *)(v1 + 88) = 0;
          *(_DWORD *)(v1 + 40) = 1;
          *(_DWORD *)v1 = v8;
          result = 0;
        }
        else
        {
          *(_DWORD *)(v1 + 88) = 0;
          *(_DWORD *)(v1 + 52) = 1;
          *(_DWORD *)v1 = 0;
        }
        return result;
      }
LABEL_3:
      v4 = *(_DWORD *)(v1 + 84);
      if ( *(_BYTE *)v4 == 31 && *(_BYTE *)(v4 + 1) == -117 )
      {
        sub_6F892D90(v2);
        result = 0;
        *(_DWORD *)(v1 + 44) = 2;
        *(_DWORD *)(v1 + 40) = 0;
        return result;
      }
      goto LABEL_4;
    }
  }
  return result;
}
