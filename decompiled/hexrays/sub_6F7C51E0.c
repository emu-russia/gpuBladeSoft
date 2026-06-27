int __usercall sub_6F7C51E0@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  int v3; // esi@1
  int v4; // ebx@1
  void *v5; // ebp@1
  size_t v7; // eax@3
  int v8; // ebx@3
  _DWORD *v9; // eax@4
  void *i; // ebx@4
  unsigned int j; // edx@9
  unsigned int v12; // eax@10
  _BYTE *v13; // eax@12
  unsigned int v14; // eax@13
  signed int v15; // ebx@22
  unsigned int v16; // eax@23
  int v17; // ebx@28
  int k; // eax@28
  char v19; // dl@32
  int v20; // [sp+18h] [bp-44h]@3
  int v21; // [sp+1Ch] [bp-40h]@4
  unsigned int v22; // [sp+20h] [bp-3Ch]@10
  int v23; // [sp+24h] [bp-38h]@1
  _DWORD *v24; // [sp+28h] [bp-34h]@1
  int v25; // [sp+2Ch] [bp-30h]@3
  int v26; // [sp+38h] [bp-24h]@1
  unsigned int v27; // [sp+3Ch] [bp-20h]@10

  v3 = a1;
  v4 = a3;
  v24 = a2;
  v5 = sub_6F773A50(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 16) + 216, &v26);
  v23 = v26;
  if ( !v26 )
  {
    v7 = *(_DWORD *)(v3 + 16);
    *((_DWORD *)v5 + 53) = v4;
    v8 = *(_DWORD *)(v3 + 92);
    *(_DWORD *)v5 = v3;
    *((_DWORD *)v5 + 2) = (char *)v5 + 216;
    v20 = (int)v5 + 216;
    *((_DWORD *)v5 + 1) = v7;
    v25 = v8;
    memset((char *)v5 + 216, 127, v7);
    if ( !sub_6F76D160(v3, 1970170211) )
    {
      v21 = 0;
      v9 = &unk_6FB6B930;
      for ( i = &unk_6FB6B3E0; ; i = (void *)*((_DWORD *)*(&off_6FB6B500 + v9[2]) + 1) )
      {
        if ( i )
        {
          if ( v9[4] == 10 )
          {
            for ( j = *(_DWORD *)i; *(_DWORD *)i; j = *(_DWORD *)i )
            {
              v22 = j;
              v12 = sub_6F76D560(v3);
              v27 = v12;
              if ( v12 && v12 < *((_DWORD *)v5 + 1) && (v13 = (_BYTE *)(v20 + v12), *v13 == 127) )
              {
                *v13 = v21;
                v14 = v22;
              }
              else
              {
                v14 = v22;
              }
              while ( 1 )
              {
                v14 = sub_6F76D630(v3, v14, &v27);
                if ( !v27 || v14 > *((_DWORD *)i + 1) )
                  break;
                if ( v27 < *((_DWORD *)v5 + 1) && *(_BYTE *)(v20 + v27) == 127 )
                  *(_BYTE *)(v20 + v27) = v21;
              }
              i = (char *)i + 8;
            }
          }
        }
        v9 = *(&off_6FB6B420 + ++v21);
        if ( !v9 )
          break;
      }
      v15 = 48;
      do
      {
        v16 = sub_6F76D560(v3);
        if ( v16 && v16 < *((_DWORD *)v5 + 1) )
          *(_BYTE *)(v20 + v16) |= 0x80u;
        ++v15;
      }
      while ( v15 != 58 );
    }
    if ( *(_DWORD *)(*((_DWORD *)v5 + 53) + 12) != 127 )
    {
      v17 = *((_DWORD *)v5 + 1);
      for ( k = 0; k < v17; ++k )
      {
        while ( (*((_BYTE *)v5 + k + 216) & 0x7F) != 127 )
        {
          if ( ++k >= v17 )
            goto LABEL_33;
        }
        v19 = *((_BYTE *)v5 + k + 216) & 0x80;
        *((_BYTE *)v5 + k + 216) = v19;
        *((_BYTE *)v5 + k + 216) = *(_BYTE *)(*((_DWORD *)v5 + 53) + 12) | v19;
        v17 = *((_DWORD *)v5 + 1);
      }
    }
LABEL_33:
    sub_6F76D230(v3, v25);
    *((_DWORD *)v5 + 3) = 0;
  }
  *v24 = v5;
  return v23;
}
