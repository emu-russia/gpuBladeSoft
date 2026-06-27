signed int __cdecl sub_6F77CB00(int a1)
{
  signed int result; // eax@1
  int v2; // esi@3
  int v3; // eax@3
  signed int v4; // edx@3
  unsigned int v5; // edi@4
  int v6; // ecx@6
  unsigned int v7; // ebp@7
  unsigned int v8; // edx@10
  unsigned int v9; // eax@11
  int v10; // edx@11
  unsigned int v11; // eax@11
  int v12; // edx@11
  unsigned int v13; // eax@11
  int v14; // edx@11
  unsigned int v15; // eax@11
  int v16; // edx@11
  signed __int32 v17; // ecx@15
  int v18; // edi@21
  int v19; // ebp@21
  unsigned int v20; // eax@23
  signed int v21; // [sp+1Ch] [bp-30h]@21
  int v22; // [sp+2Ch] [bp-20h]@10

  result = 161;
  if ( *(_DWORD *)(a1 + 404) >= (unsigned int)(a1 + 40) )
  {
    v2 = *(_DWORD *)(a1 + 412);
    *(_BYTE *)(v2 + 64) = 1;
    v3 = *(_DWORD *)(a1 + 16);
    v4 = *(_BYTE *)v3;
    if ( (_BYTE)v4 == 30 )
    {
      v20 = sub_6F77A6B0((_BYTE *)v3, *(_DWORD *)(a1 + 20), 0, &v22);
      v8 = -v22;
      goto LABEL_24;
    }
    v5 = *(_DWORD *)(a1 + 20);
    if ( v4 == 28 )
    {
      v6 = 0;
      if ( v5 >= v3 + 3 )
        v6 = (*(_BYTE *)(v3 + 2) | (*(_BYTE *)(v3 + 1) << 8)) << 16;
      goto LABEL_10;
    }
    if ( v4 != 29 )
    {
      v6 = (v4 - 139) << 16;
      if ( v4 > 246 )
      {
        v6 = 0;
        v7 = v3 + 2;
        if ( v4 > 250 )
        {
          if ( v5 >= v7 )
            v6 = (((251 - v4) << 8) - *(_BYTE *)(v3 + 1) - 108) << 16;
        }
        else if ( v5 >= v7 )
        {
          v6 = (((v4 - 247) << 8) + *(_BYTE *)(v3 + 1) + 108) << 16;
        }
      }
      goto LABEL_10;
    }
    if ( v5 < v3 + 5 )
    {
      v6 = 0;
    }
    else
    {
      v17 = _byteswap_ulong(*(_DWORD *)(v3 + 1));
      if ( v17 > 0x7FFF )
      {
        if ( v17 <= 99999 )
        {
          v21 = 5;
        }
        else if ( v17 <= 999999 )
        {
          v21 = 6;
        }
        else if ( v17 <= 9999999 )
        {
          v21 = 7;
        }
        else if ( v17 <= 99999999 )
        {
          v21 = 8;
        }
        else
        {
          if ( v17 > 999999999 )
          {
            v18 = 100000;
            v19 = 5;
            v21 = 10;
            goto LABEL_22;
          }
          v21 = 9;
        }
        v19 = v21 - 5;
        v18 = dword_6FB57520[v21 - 5];
LABEL_22:
        if ( v17 / v18 <= 0x7FFF )
        {
          v20 = sub_6F7C9760(v17, v18);
          v8 = -v19;
        }
        else
        {
          v22 = v21 - 4;
          v20 = sub_6F7C9760(v17, dword_6FB57520[v21 - 4]);
          v8 = -(v21 - 4);
        }
LABEL_24:
        *(_DWORD *)(v2 + 48) = v20;
        v22 = v8;
        if ( v8 > 9 )
        {
          *(_DWORD *)(v2 + 48) = 0x10000;
          *(_DWORD *)(v2 + 56) = 0;
          result = 0;
          *(_DWORD *)(v2 + 52) = 0;
          *(_DWORD *)(v2 + 60) = 0x10000;
          *(_DWORD *)(v2 + 72) = 0;
          *(_DWORD *)(v2 + 76) = 0;
          *(_DWORD *)(v2 + 68) = 1;
          return result;
        }
        goto LABEL_11;
      }
      v6 = v17 << 16;
    }
LABEL_10:
    *(_DWORD *)(v2 + 48) = v6;
    v22 = 0;
    v8 = 0;
LABEL_11:
    v9 = sub_6F77C9E0(a1 + 20, v8);
    v10 = v22;
    *(_DWORD *)(v2 + 56) = v9;
    v11 = sub_6F77C9E0(a1 + 24, v10);
    v12 = v22;
    *(_DWORD *)(v2 + 52) = v11;
    v13 = sub_6F77C9E0(a1 + 28, v12);
    v14 = v22;
    *(_DWORD *)(v2 + 60) = v13;
    v15 = sub_6F77C9E0(a1 + 32, v14);
    v16 = v22;
    *(_DWORD *)(v2 + 72) = v15;
    *(_DWORD *)(v2 + 76) = sub_6F77C9E0(a1 + 36, v16);
    *(_DWORD *)(v2 + 68) = dword_6FB57520[v22];
    result = 0;
  }
  return result;
}
