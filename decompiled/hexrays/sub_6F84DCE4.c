int __cdecl sub_6F84DCE4(int a1, int a2, unsigned int a3)
{
  int result; // eax@3
  int v4; // [sp+14h] [bp-34h]@18
  const char *v5; // [sp+18h] [bp-30h]@18
  const char *v6; // [sp+1Ch] [bp-2Ch]@18
  size_t v7; // [sp+20h] [bp-28h]@18
  int v8; // [sp+24h] [bp-24h]@18
  int v9; // [sp+28h] [bp-20h]@18
  int v10; // [sp+2Ch] [bp-1Ch]@18
  const char *v11; // [sp+30h] [bp-18h]@13
  const char *v12; // [sp+34h] [bp-14h]@10
  unsigned int v13; // [sp+38h] [bp-10h]@1
  const char *i; // [sp+3Ch] [bp-Ch]@13

  v13 = 0;
  if ( !*(_DWORD *)(a1 + 664) )
    goto LABEL_22;
  if ( *(_DWORD *)(a1 + 664) == 1 )
    return sub_6F84A77C(a1, a3);
  if ( --*(_DWORD *)(a1 + 664) == 1 )
  {
    sub_6F84A77C(a1, a3);
    result = sub_6F839842(a1, "no space in chunk cache");
  }
  else
  {
LABEL_22:
    if ( !(*(_DWORD *)(a1 + 116) & 1) )
      sub_6F83979A(a1, (int)"missing IHDR");
    if ( *(_DWORD *)(a1 + 116) & 4 )
      *(_DWORD *)(a1 + 116) |= 8u;
    v12 = (const char *)sub_6F84A90E(a1, a3 + 1, 1);
    if ( v12 )
    {
      sub_6F84A73A(a1, (int)v12, a3);
      result = sub_6F84A77C(a1, v13);
      if ( !result )
      {
        v11 = v12;
        v12[a3] = 0;
        for ( i = v11; *i; ++i )
          ;
        if ( &v11[a3] != i )
          ++i;
        v4 = -1;
        v5 = v11;
        v9 = 0;
        v10 = 0;
        v8 = 0;
        v6 = i;
        v7 = strlen(i);
        result = sub_6F851A11(a1, a2, (int)&v4, 1);
        if ( result )
          result = sub_6F839262(a1, "Insufficient memory to process text chunk");
      }
    }
    else
    {
      result = sub_6F839842(a1, "out of memory");
    }
  }
  return result;
}
