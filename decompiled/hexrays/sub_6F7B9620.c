int __cdecl sub_6F7B9620(int a1, int a2)
{
  int v2; // edi@1
  int v3; // esi@1
  void *v4; // ebx@1
  int v5; // eax@3
  int v7; // edx@6
  int (__cdecl **v8)(_DWORD, _DWORD, _DWORD, _DWORD); // eax@6
  int v9; // eax@7
  int v10; // eax@10
  unsigned int v11; // edx@11
  int v12; // eax@12
  int v13; // edx@14
  int v14; // ecx@17
  int v15; // edx@18
  unsigned __int16 v16; // cx@19
  char *v17; // eax@27
  bool v18; // zf@27
  _BYTE *v19; // edx@28
  int v20; // ecx@28
  int v21; // edi@32
  char *v22; // esi@32
  _BYTE *v23; // ebx@32
  int v24; // eax@34
  int v25; // ST04_4@34
  __int16 v26; // ax@34
  __int16 v27; // cx@34
  int v28; // [sp+28h] [bp-54h]@6
  unsigned int v29; // [sp+28h] [bp-54h]@14
  char *v30; // [sp+28h] [bp-54h]@27
  int v31; // [sp+2Ch] [bp-50h]@14
  int v32; // [sp+30h] [bp-4Ch]@27
  void *v33; // [sp+30h] [bp-4Ch]@32
  unsigned int v34; // [sp+34h] [bp-48h]@28
  int v35; // [sp+38h] [bp-44h]@28
  _BYTE *v36; // [sp+3Ch] [bp-40h]@35
  int v37; // [sp+44h] [bp-38h]@1
  int v38; // [sp+48h] [bp-34h]@14
  char v39; // [sp+4Ch] [bp-30h]@7
  void *v40; // [sp+54h] [bp-28h]@10
  int (__cdecl *v41)(const char *, size_t, int); // [sp+58h] [bp-24h]@10
  int v42; // [sp+5Ch] [bp-20h]@10

  v2 = a2;
  v37 = 2;
  v3 = *(_DWORD *)(a2 + 28);
  v4 = sub_6F773A50(*(_DWORD *)(a2 + 28), 44, &v37);
  if ( !v37 )
  {
    v37 = sub_6F772380(a2, *(_DWORD *)(a2 + 4));
    if ( !v37 )
    {
      v7 = *(_DWORD *)(a1 + 488);
      *((_DWORD *)v4 + 1) = *(_DWORD *)(a1 + 460);
      v28 = v7;
      *((_DWORD *)v4 + 2) = *(_DWORD *)(a1 + 464);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(a1 + 468);
      *((_DWORD *)v4 + 4) = *(_DWORD *)(a1 + 472);
      *((_DWORD *)v4 + 5) = *(_DWORD *)(a1 + 472);
      *((_DWORD *)v4 + 6) = *(_DWORD *)(a1 + 464);
      v8 = *(int (__cdecl ***)(_DWORD, _DWORD, _DWORD, _DWORD))(v7 + 24);
      if ( !v8 )
        goto LABEL_23;
      v9 = (*v8)(&v39, *(_DWORD *)(a2 + 28), *(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36));
      v37 = v9;
      if ( v9 )
      {
        if ( (_BYTE)v9 != 2 )
        {
LABEL_9:
          sub_6F772460(v2);
          goto LABEL_2;
        }
      }
      else
      {
        v40 = v4;
        v41 = sub_6F7B9590;
        v42 = a1 + 132;
        v37 = (*(int (__cdecl **)(char *))(*(_DWORD *)(v28 + 24) + 8))(&v39);
        (*(void (__cdecl **)(char *))(*(_DWORD *)(v28 + 24) + 4))(&v39);
        v10 = v37;
        if ( (_BYTE)v37 != 2 )
          goto LABEL_22;
      }
      v11 = *(_DWORD *)(a2 + 4);
      if ( v11 <= 6 )
        goto LABEL_9;
      v12 = *(_DWORD *)(a2 + 32);
      if ( *(_BYTE *)(v12 + 1) > 3u || *(_DWORD *)(v12 + 2) != v11 )
        goto LABEL_9;
      v13 = *(_DWORD *)(a2 + 28);
      v38 = 0;
      v31 = v13;
      v29 = *(_DWORD *)(a2 + 36);
      if ( v29 < v12 + 101 )
        goto LABEL_44;
      if ( v29 < v12
               + (unsigned int)(unsigned __int16)(*(_BYTE *)(v12 + 99) | (unsigned __int16)(*(_BYTE *)(v12 + 100) << 8))
               + 135 )
        goto LABEL_21;
      if ( (unsigned __int16)((*(_BYTE *)(v12
                                        + (unsigned __int16)(*(_BYTE *)(v12 + 99) | (unsigned __int16)(*(_BYTE *)(v12 + 100) << 8))
                                        + 118) << 8) | *(_BYTE *)(v12
                                                                + (unsigned __int16)(*(_BYTE *)(v12 + 99) | (unsigned __int16)(*(_BYTE *)(v12 + 100) << 8))
                                                                + 117)) <= 0x11u )
        goto LABEL_21;
      v14 = v12
          + *(_DWORD *)(v12
                      + (unsigned __int16)(*(_BYTE *)(v12 + 99) | (unsigned __int16)(*(_BYTE *)(v12 + 100) << 8))
                      + 131);
      if ( v12 == v14 )
        goto LABEL_21;
      v15 = v14 + 2;
      if ( v29 < v14 + 2
        || (v16 = (*(_BYTE *)(v14 + 1) << 8) | *(_BYTE *)v14,
            *((_DWORD *)v4 + 10) = v16,
            v29 < v15 + 4 * (unsigned int)v16) )
      {
LABEL_44:
        v38 = 2;
      }
      else
      {
        if ( !v16 )
          goto LABEL_21;
        v32 = v15;
        v17 = sub_6F773B30(v31, 16, 0, v16, 0, &v38);
        v18 = v38 == 0;
        v30 = v17;
        *((_DWORD *)v4 + 9) = v17;
        if ( v18 )
        {
          v19 = (_BYTE *)v32;
          v20 = 0;
          v34 = v32 + 4 * *((_DWORD *)v4 + 10);
          v35 = *(_DWORD *)(a1 + 92);
          while ( 1 )
          {
            if ( v20 >= *(_DWORD *)(a1 + 36) )
            {
              v21 = v3;
              v22 = v17;
              v33 = v4;
              v23 = v19;
              goto LABEL_33;
            }
            if ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * v20) + 8) == 7 )
              break;
            ++v20;
          }
          v36 = (_BYTE *)v32;
          v38 = sub_6F76D230(a1, *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * v20));
          if ( v38 )
            goto LABEL_26;
          v33 = v4;
          v21 = v3;
          v22 = v30;
          v23 = v36;
LABEL_33:
          while ( v34 > (unsigned int)v23 )
          {
            v24 = *v23;
            v22 += 16;
            v23 += 4;
            *((_DWORD *)v22 - 4) = sub_6F76D560(a1);
            v25 = *(v23 - 3);
            *((_DWORD *)v22 - 3) = sub_6F76D560(a1);
            v26 = *(v23 - 1);
            v27 = *(v23 - 2);
            *((_DWORD *)v22 - 1) = 0;
            *((_DWORD *)v22 - 2) = (signed __int16)(v27 | (v26 << 8));
          }
          v3 = v21;
          v4 = v33;
          v2 = a2;
          if ( v35 )
            v38 = sub_6F76D230(a1, v35);
          if ( !v38 )
          {
            qsort(
              *((void **)v33 + 9),
              *((_DWORD *)v33 + 10),
              0x10u,
              (int (__cdecl *)(const void *, const void *))sub_6F7B7080);
            if ( !v38 )
              goto LABEL_21;
          }
        }
      }
LABEL_26:
      sub_6F773D90(v31, *((_DWORD *)v4 + 9));
      *((_DWORD *)v4 + 9) = 0;
      *((_DWORD *)v4 + 10) = 0;
LABEL_21:
      v10 = v38;
      v37 = v38;
LABEL_22:
      if ( v10 )
        goto LABEL_9;
LABEL_23:
      *(_DWORD *)(a1 + 460) = *((_DWORD *)v4 + 1);
      *(_DWORD *)(a1 + 464) = *((_DWORD *)v4 + 2);
      *(_DWORD *)(a1 + 468) = *((_DWORD *)v4 + 3);
      *(_DWORD *)(a1 + 472) = *((_DWORD *)v4 + 4);
      *(_DWORD *)(a1 + 52) = *((_WORD *)v4 + 3);
      *(_DWORD *)(a1 + 56) = *((_WORD *)v4 + 5);
      *(_DWORD *)(a1 + 60) = (*((_DWORD *)v4 + 3) + 0xFFFF) >> 16;
      *(_DWORD *)(a1 + 64) = (*((_DWORD *)v4 + 4) + 0xFFFF) >> 16;
      *(_WORD *)(a1 + 70) = (unsigned int)(*((_DWORD *)v4 + 5) + 0x8000) >> 16;
      *(_WORD *)(a1 + 72) = (unsigned int)(*((_DWORD *)v4 + 6) + 0x8000) >> 16;
      if ( *((_DWORD *)v4 + 10) )
      {
        *(_DWORD *)(a1 + 492) = v4;
        *(_DWORD *)(a1 + 8) |= 0x40u;
        v4 = 0;
      }
      goto LABEL_9;
    }
  }
LABEL_2:
  if ( v4 )
  {
    sub_6F773D90(v3, *((_DWORD *)v4 + 9));
    v5 = *((_DWORD *)v4 + 7);
    *((_DWORD *)v4 + 9) = 0;
    *((_DWORD *)v4 + 10) = 0;
    sub_6F773D90(v3, v5);
    *((_DWORD *)v4 + 7) = 0;
    *((_DWORD *)v4 + 8) = 0;
    sub_6F773D90(v3, (int)v4);
  }
  return v37;
}
