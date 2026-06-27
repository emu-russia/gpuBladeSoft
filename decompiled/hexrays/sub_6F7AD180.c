signed int __cdecl sub_6F7AD180(int a1, _DWORD *a2)
{
  int v2; // ebx@1
  int v3; // edi@1
  int v4; // esi@1
  void *v5; // edi@3
  signed int result; // eax@3
  int v7; // ebp@5
  int v8; // edx@5
  char *v9; // ecx@5
  int v10; // eax@5
  int v11; // esi@5
  int v12; // eax@5
  int v13; // esi@6
  int v14; // ebx@6
  int v15; // ebx@9
  void *v16; // ecx@16
  _DWORD *v17; // eax@31
  _DWORD *v18; // ebp@31
  signed int v19; // eax@32
  _DWORD *v20; // ecx@32
  int v21; // ebp@33
  int v22; // eax@33
  int v23; // edx@33
  int v24; // edx@36
  int v25; // eax@36
  int v26; // ebx@38
  _DWORD *v27; // ecx@40
  int v28; // ebp@40
  char v29; // ah^2@43
  signed int v30; // ebp@44
  int v31; // edx@47
  int v32; // ST18_4@48
  unsigned __int32 *v33; // ebx@48
  int v34; // [sp+14h] [bp-68h]@5
  int v35; // [sp+14h] [bp-68h]@24
  signed int v36; // [sp+14h] [bp-68h]@40
  int v37; // [sp+14h] [bp-68h]@44
  _DWORD *v38; // [sp+18h] [bp-64h]@42
  int v39; // [sp+1Ch] [bp-60h]@33
  int v40; // [sp+20h] [bp-5Ch]@33
  int v41; // [sp+24h] [bp-58h]@33
  _DWORD *v42; // [sp+2Ch] [bp-50h]@33
  unsigned int v43; // [sp+34h] [bp-48h]@22
  int v44; // [sp+38h] [bp-44h]@1
  int v45; // [sp+3Ch] [bp-40h]@24
  unsigned __int16 v46; // [sp+40h] [bp-3Ch]@30
  unsigned __int16 v47; // [sp+44h] [bp-38h]@27
  __int16 v48; // [sp+46h] [bp-36h]@26
  unsigned __int16 v49; // [sp+48h] [bp-34h]@29
  unsigned __int16 v50; // [sp+4Ah] [bp-32h]@28
  int v51; // [sp+4Ch] [bp-30h]@42
  int v52; // [sp+50h] [bp-2Ch]@43
  int v53; // [sp+54h] [bp-28h]@43
  int v54; // [sp+58h] [bp-24h]@43
  unsigned __int16 v55; // [sp+5Eh] [bp-1Eh]@43
  int v56; // [sp+80h] [bp+4h]@47

  v2 = a1;
  v44 = 0;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = *(_DWORD *)(a1 + 100);
  if ( *(_DWORD *)(a1 + 676) )
    goto LABEL_2;
  result = (*(int (__cdecl **)(int, signed int, int, int *))(a1 + 508))(a1, 1735811442, v3, (int *)&v43);
  v44 = result;
  if ( !result )
  {
    result = (*(int (__cdecl **)(int, signed int, int, unsigned int *))(a1 + 508))(a1, 1719034226, v3, &v43);
    v44 = result;
    if ( !result )
    {
      v35 = sub_6F7720A0(v3);
      result = sub_6F7728E0(v3, (int)&unk_6FB69480, (int)&v45);
      v44 = result;
      if ( !result )
      {
        result = 8;
        if ( v45 == 0x10000
          && v48 == 20
          && v47 <= 0x3FFEu
          && v50 == 4 * v47 + 4
          && v49 <= 0x7EFFu
          && 20 * v47 + v46 + v50 * (unsigned int)v49 <= v43 )
        {
          v17 = sub_6F773A50(v4, 40, &v44);
          v18 = v17;
          *(_DWORD *)(a1 + 676) = v17;
          result = v44;
          if ( !v44 )
          {
            v19 = 5 * v47 + 4 * (v47 * v49 + 2 * (v49 + 3 * v47) + 5);
            v18[3] = v19;
            v20 = sub_6F773A50(v4, v19, &v44);
            result = v44;
            if ( !v44 )
            {
              v21 = v47;
              v42 = v20;
              *(_DWORD *)(*(_DWORD *)(a1 + 676) + 8) = v20;
              v22 = v49;
              v20[3] = v20 + 5;
              *v20 = v21;
              v20[1] = -1;
              v20[2] = v22;
              v41 = (int)&v20[6 * v21 + 5];
              v20[4] = v41;
              v39 = v41 + 8 * v22;
              v23 = 0;
              v40 = 4 * v21;
              while ( v23 < v22 )
              {
                *(_DWORD *)(v41 + 8 * v23++) = v39;
                v39 += v40;
              }
              v24 = 0;
              v25 = v41 + 8 * v22 + v40 * v22;
              while ( v24 < v21 )
              {
                v26 = 6 * v24++;
                v20[v26 + 5] = v25;
                v25 += 5;
              }
              v2 = a1;
              result = sub_6F771FF0(v3, v35 + v46);
              v44 = result;
              if ( !result )
              {
                v27 = v42;
                v36 = 0;
                v28 = v42[3];
                while ( v36 < v47 )
                {
                  v38 = v27;
                  result = sub_6F7728E0(v3, (int)&unk_6FB69460, (int)&v51);
                  v44 = result;
                  if ( result )
                    return result;
                  v29 = BYTE3(v51);
                  v28 += 24;
                  ++v36;
                  v27 = v38;
                  *(_DWORD *)(v28 - 8) = v51;
                  *(_DWORD *)(v28 - 20) = v52;
                  *(_DWORD *)(v28 - 16) = v53;
                  *(_DWORD *)(v28 - 12) = v54;
                  *(_DWORD *)(v28 - 4) = v55;
                  **(_BYTE **)(v28 - 24) = v29;
                  *(_BYTE *)(*(_DWORD *)(v28 - 24) + 1) = *(_WORD *)(v28 - 6);
                  *(_BYTE *)(*(_DWORD *)(v28 - 24) + 2) = *(_WORD *)(v28 - 8) >> 8;
                  *(_BYTE *)(*(_DWORD *)(v28 - 24) + 3) = *(_DWORD *)(v28 - 8);
                  *(_BYTE *)(*(_DWORD *)(v28 - 24) + 4) = 0;
                }
                v30 = 0;
                v37 = v27[4];
                while ( v30 < v49 )
                {
                  result = sub_6F772380(v3, 4 * v47 + 4);
                  v44 = result;
                  if ( result )
                    return result;
                  *(_DWORD *)(v37 + 8 * v30 + 4) = (unsigned __int16)sub_6F7724C0(v3);
                  sub_6F7724C0(v3);
                  v31 = 0;
                  v56 = v2;
                  while ( v31 < v47 )
                  {
                    v32 = v31;
                    v33 = (unsigned __int32 *)(*(_DWORD *)(v37 + 8 * v30) + 4 * v31);
                    *v33 = sub_6F772560(v3);
                    v31 = v32 + 1;
                  }
                  v2 = v56;
                  ++v30;
                  sub_6F772460(v3);
                }
LABEL_2:
                if ( a2 )
                {
                  v5 = sub_6F773A50(v4, *(_DWORD *)(*(_DWORD *)(v2 + 676) + 12), &v44);
                  result = v44;
                  if ( v44 )
                    return result;
                  memcpy(v5, *(const void **)(*(_DWORD *)(v2 + 676) + 8), *(_DWORD *)(*(_DWORD *)(v2 + 676) + 12));
                  v7 = *(_DWORD *)v5;
                  v8 = (int)v5 + 20;
                  *((_DWORD *)v5 + 3) = (char *)v5 + 20;
                  v9 = (char *)v5 + 24 * v7 + 20;
                  v10 = *((_DWORD *)v5 + 2);
                  *((_DWORD *)v5 + 4) = v9;
                  v11 = v10;
                  v34 = v10;
                  v12 = (int)&v9[8 * v10];
                  if ( v11 )
                  {
                    v13 = 4 * v7;
                    v14 = v12;
                    do
                    {
                      *(_DWORD *)v9 = v14;
                      v9 += 8;
                      v14 += v13;
                    }
                    while ( v9 != (char *)v12 );
                    v12 += v34 * v13;
                  }
                  v15 = v12 + 5 * v7;
                  if ( v7 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v16 = *(void **)(v8 + 16);
                        *(_DWORD *)v8 = v12;
                        if ( v16 != (void *)2003265652 )
                          break;
                        v12 += 5;
                        *(_DWORD *)v8 = "Weight";
                        v8 += 24;
                        if ( v12 == v15 )
                          goto LABEL_18;
                      }
                      if ( v16 == (void *)2003072104 )
                      {
                        *(_DWORD *)v8 = "Width";
                      }
                      else if ( v16 == &loc_6F70737A )
                      {
                        *(_DWORD *)v8 = "OpticalSize";
                      }
                      else if ( v16 == (void *)1936486004 )
                      {
                        *(_DWORD *)v8 = "Slant";
                      }
                      v12 += 5;
                      v8 += 24;
                    }
                    while ( v12 != v15 );
                  }
LABEL_18:
                  *a2 = v5;
                }
                return v44;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
