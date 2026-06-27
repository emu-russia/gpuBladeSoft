int __cdecl sub_6F7C3450(int a1, int a2)
{
  int v2; // ebp@1
  int v3; // edi@1
  int v4; // eax@1
  int v5; // esi@2
  int v6; // eax@3
  int *v7; // edx@3
  int v8; // ecx@5
  int v9; // ecx@7
  int v10; // esi@7
  unsigned int v11; // edi@7
  signed __int64 v12; // rax@8
  signed __int64 v13; // rax@10
  int result; // eax@11
  int v15; // esi@12
  int v16; // eax@13
  int *v17; // edx@13
  int v18; // ecx@15
  int v19; // edx@17
  int v20; // esi@17
  unsigned int v21; // edi@17
  signed __int64 v22; // rax@18
  signed __int64 v23; // rax@19
  bool v24; // sf@19
  unsigned __int8 v25; // of@19
  unsigned int *v26; // ebp@20
  bool v27; // zf@21
  signed int v28; // ecx@21
  signed int v29; // edx@23
  unsigned int v30; // ebx@27
  signed __int64 v31; // rax@29
  unsigned int v32; // ebx@29
  signed __int64 v33; // rax@29
  unsigned int v34; // esi@29
  unsigned int v35; // esi@29
  int v36; // edx@30
  signed __int64 v37; // rax@34
  signed __int64 v38; // rax@35
  signed int v39; // eax@35
  unsigned int v40; // edi@35
  signed int v41; // edx@36
  signed int v42; // edx@37
  int v43; // [sp+14h] [bp-28h]@1
  int v44; // [sp+14h] [bp-28h]@11
  int v45; // [sp+18h] [bp-24h]@11
  int v46; // [sp+1Ch] [bp-20h]@1
  int v47; // [sp+1Ch] [bp-20h]@20

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 20);
  v46 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 4);
  v43 = *(_DWORD *)(a2 + 4);
  if ( v4 != *(_DWORD *)(a1 + 1608) || v3 != *(_DWORD *)(a1 + 1612) )
  {
    v5 = *(_DWORD *)(a1 + 1832);
    *(_DWORD *)(a1 + 1608) = v4;
    *(_DWORD *)(a1 + 1612) = v3;
    if ( v5 )
    {
      v6 = 0;
      v7 = (int *)(a1 + 1888);
      if ( *(_BYTE *)(a1 + 1860) & 8 )
      {
        v6 = 0;
LABEL_34:
        v37 = *(_DWORD *)(a2 + 8) * (signed __int64)*(_DWORD *)(a1 + 28 * v6 + 1848);
      }
      else
      {
        while ( ++v6 != v5 )
        {
          v8 = *v7;
          v7 += 7;
          if ( v8 & 8 )
            goto LABEL_34;
        }
      }
    }
    v9 = *(_DWORD *)(a1 + 52);
    v10 = a1 + 56;
    *(_DWORD *)(a1 + 48) = v3;
    *(_DWORD *)(a1 + 16) = v3;
    v11 = 0;
    *(_DWORD *)(a1 + 44) = v43;
    *(_DWORD *)(a1 + 8) = v43;
    if ( v9 )
    {
      do
      {
        v12 = (unsigned int)(((signed int)((unsigned __int64)(v43 * (signed __int64)*(_DWORD *)v10) >> 32) >> 31)
                           + 0x8000)
            + v43 * (signed __int64)*(_DWORD *)v10;
        LODWORD(v12) = (HIDWORD(v12) << 16) + ((unsigned int)v12 >> 16);
        *(_DWORD *)(v10 + 4) = v12;
        *(_DWORD *)(v10 + 8) = v12;
        ++v11;
        v10 += 12;
      }
      while ( v11 < *(_DWORD *)(a1 + 52) );
      v2 = a2;
    }
    v13 = (unsigned int)(((signed int)((unsigned __int64)(v43 * (signed __int64)*(_DWORD *)(a1 + 252)) >> 32) >> 31)
                       + 0x8000)
        + v43 * (signed __int64)*(_DWORD *)(a1 + 252);
    *(_BYTE *)(a1 + 256) = (signed int)((HIDWORD(v13) << 16) + ((unsigned int)v13 >> 16)) <= 39;
  }
  result = *(_DWORD *)(v2 + 8);
  v44 = *(_DWORD *)(v2 + 8);
  v45 = *(_DWORD *)(v2 + 16);
  if ( result != *(_DWORD *)(a1 + 3180) || *(_DWORD *)(v2 + 16) != *(_DWORD *)(a1 + 3184) )
  {
    v15 = *(_DWORD *)(a1 + 1832);
    *(_DWORD *)(a1 + 3180) = v44;
    *(_DWORD *)(a1 + 3184) = v45;
    if ( v15 )
    {
      v16 = 0;
      v17 = (int *)(a1 + 1888);
      if ( *(_BYTE *)(a1 + 1860) & 8 )
      {
        v16 = 0;
LABEL_35:
        v38 = *(_DWORD *)(v2 + 8) * (signed __int64)*(_DWORD *)(a1 + 28 * v16 + 1848);
        v39 = (((unsigned __int64)(unsigned int)((SHIDWORD(v38) >> 31) + 0x8000) + v38) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v38) >> 31) + 0x8000 + v38) >> 16);
        v40 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 12);
        HIDWORD(v38) = *(_WORD *)(*(_DWORD *)(v46 + 88) + 12);
        if ( HIDWORD(v38) > v40 || HIDWORD(v38) <= 5 || (v41 = 52, !v40) )
          v41 = 40;
        v42 = (v39 + v41) & 0xFFFFFFC0;
        if ( v39 != v42 )
          v44 = sub_6F7C9420(v44, v42, v39);
      }
      else
      {
        while ( ++v16 != v15 )
        {
          v18 = *v17;
          v17 += 7;
          if ( v18 & 8 )
            goto LABEL_35;
        }
      }
    }
    v19 = *(_DWORD *)(a1 + 1624);
    v20 = a1 + 1628;
    *(_DWORD *)(a1 + 1620) = v45;
    *(_DWORD *)(a1 + 20) = v45;
    v21 = 0;
    *(_DWORD *)(a1 + 1616) = v44;
    *(_DWORD *)(a1 + 12) = v44;
    if ( v19 )
    {
      do
      {
        v22 = (unsigned int)(((signed int)((unsigned __int64)(v44 * (signed __int64)*(_DWORD *)v20) >> 32) >> 31)
                           + 0x8000)
            + v44 * (signed __int64)*(_DWORD *)v20;
        LODWORD(v22) = (HIDWORD(v22) << 16) + ((unsigned int)v22 >> 16);
        *(_DWORD *)(v20 + 4) = v22;
        *(_DWORD *)(v20 + 8) = v22;
        ++v21;
        v20 += 12;
      }
      while ( v21 < *(_DWORD *)(a1 + 1624) );
    }
    v23 = (unsigned int)(((signed int)((unsigned __int64)(v44 * (signed __int64)*(_DWORD *)(a1 + 1824)) >> 32) >> 31)
                       + 0x8000)
        + v44 * (signed __int64)*(_DWORD *)(a1 + 1824);
    LODWORD(v23) = (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
    v25 = __OFSUB__((_DWORD)v23, 39);
    v27 = (_DWORD)v23 == 39;
    v24 = (signed int)v23 - 39 < 0;
    result = *(_DWORD *)(a1 + 1832);
    *(_BYTE *)(a1 + 1828) = v24 ^ v25 | v27;
    if ( result )
    {
      v26 = (unsigned int *)(a1 + 1860);
      v47 = a1 + 28 * result + 1860;
      do
      {
        v31 = (unsigned int)(((signed int)((unsigned __int64)(v44 * (signed __int64)(signed int)*(v26 - 6)) >> 32) >> 31)
                           + 0x8000)
            + v44 * (signed __int64)(signed int)*(v26 - 6);
        v32 = v45 + (HIDWORD(v31) << 16) + ((unsigned int)v31 >> 16);
        LODWORD(v31) = *(v26 - 3);
        *(v26 - 5) = v32;
        *(v26 - 4) = v32;
        v33 = (unsigned int)(((signed int)((unsigned __int64)(v44 * (signed __int64)(signed int)v31) >> 32) >> 31)
                           + 0x8000)
            + v44 * (signed __int64)(signed int)v31;
        v34 = *v26;
        LODWORD(v33) = v45 + (HIDWORD(v33) << 16) + ((unsigned int)v33 >> 16);
        *(v26 - 2) = v33;
        *(v26 - 1) = v33;
        LODWORD(v33) = *(v26 - 6) - *(v26 - 3);
        v35 = v34 & 0xFFFFFFFE;
        *v26 = v35;
        result = (((unsigned __int64)(unsigned int)(((signed int)((unsigned __int64)(v44
                                                                                   * (signed __int64)(signed int)v33) >> 32) >> 31)
                                                  + 0x8000)
                 + v44 * (signed __int64)(signed int)v33) >> 32 << 16)
               + ((unsigned int)(((signed int)((unsigned __int64)(v44 * (signed __int64)(signed int)v33) >> 32) >> 31)
                               + 0x8000
                               + v44 * v33) >> 16);
        if ( (unsigned int)(result + 48) <= 0x60 )
        {
          v36 = (result ^ (result >> 31)) - (result >> 31);
          if ( v36 > 31 )
          {
            v27 = v36 == 48;
            v28 = -32;
            if ( v36 == 48 )
              v28 = -64;
            v29 = 32;
            if ( v27 )
              v29 = 64;
          }
          else
          {
            v28 = 0;
            v29 = 0;
          }
          if ( result < 0 )
            v29 = v28;
          result = v35 | 1;
          v30 = (v32 + 32) & 0xFFFFFFC0;
          *v26 = v35 | 1;
          *(v26 - 4) = v30;
          *(v26 - 1) = v30 - v29;
        }
        v26 += 7;
      }
      while ( v26 != (unsigned int *)v47 );
    }
  }
  return result;
}
