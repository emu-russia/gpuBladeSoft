signed int __usercall sub_6F88CF20@<eax>(int a1@<eax>)
{
  int v1; // esi@1
  signed int v2; // ebx@1
  int v3; // ebp@1
  int v4; // edi@1
  signed int v5; // eax@2
  int v6; // eax@6
  signed int result; // eax@9
  int v8; // eax@11
  int v9; // ebp@12
  int v10; // eax@12
  int v11; // ebp@14
  int v12; // eax@14
  const char *v13; // eax@18

  v1 = a1;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 100);
  v4 = a1 + 84;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v1 + 88) )
    {
      result = sub_6F88CCC0(v1);
      if ( result == -1 )
        return result;
      if ( !*(_DWORD *)(v1 + 88) )
      {
        sub_6F88C430(v1, -5, "unexpected end of file");
        v8 = *(_DWORD *)(v1 + 100);
        goto LABEL_12;
      }
    }
    v5 = sub_6F893010(v4, 0);
    v2 = v5;
    if ( v5 == 2 || v5 == -2 )
    {
      sub_6F88C430(v1, -2, "internal error: inflate stream corrupt");
      return -1;
    }
    if ( v5 == -4 )
    {
      sub_6F88C430(v1, -4, "out of memory");
      return -1;
    }
    if ( v5 == -3 )
      break;
    v6 = *(_DWORD *)(v1 + 100);
    if ( !v6 )
    {
      v8 = 0;
LABEL_12:
      v9 = v3 - v8;
      v10 = *(_DWORD *)(v1 + 96);
      *(_DWORD *)v1 = v9;
      *(_DWORD *)(v1 + 4) = v10 - v9;
      result = 0;
      if ( v2 != 1 )
        return result;
      goto LABEL_15;
    }
    if ( v2 == 1 )
    {
      v11 = v3 - v6;
      v12 = *(_DWORD *)(v1 + 96);
      *(_DWORD *)v1 = v11;
      *(_DWORD *)(v1 + 4) = v12 - v11;
LABEL_15:
      *(_DWORD *)(v1 + 44) = 0;
      return 0;
    }
  }
  v13 = "compressed data error";
  if ( *(_DWORD *)(v1 + 108) )
    v13 = *(const char **)(v1 + 108);
  sub_6F88C430(v1, -3, v13);
  return -1;
}
