signed int __usercall sub_6F89FBA0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int v4; // ecx@1
  int v5; // esi@2
  _DWORD *v6; // edi@2
  int v7; // ebx@4
  int v8; // eax@4
  char v9; // al@4
  int v10; // eax@8
  int v11; // edx@8
  _DWORD *v12; // ecx@10
  const char *v13; // esi@10
  signed int v14; // eax@10
  char i; // dl@10
  signed int v16; // ecx@11
  int v17; // eax@15
  char v18; // ST10_1@15
  _DWORD *v20; // ecx@17
  int v21; // edx@17
  int v22; // ecx@18
  int v23; // eax@18
  int v24; // edx@18
  int v25; // eax@19
  int v26; // eax@25
  const char *v27; // esi@25
  signed int v28; // eax@25
  char k; // dl@25
  signed int v30; // ecx@26
  int v31; // eax@30
  char v32; // ST1F_1@30
  signed int v33; // eax@31
  const char *v34; // edi@31
  char j; // dl@31
  signed int v36; // ecx@32
  int v37; // eax@36
  char v38; // ST1F_1@36
  int v39; // eax@9
  int v40; // eax@24
  int v41; // [sp+10h] [bp-2Ch]@2
  int v42; // [sp+14h] [bp-28h]@4
  int v43; // [sp+18h] [bp-24h]@4

  v4 = **(_DWORD **)(a3 + 8);
  if ( *(_BYTE *)v4 != 102 )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)a4 + 12);
  v41 = *(_DWORD *)(*(_DWORD *)a4 + 8);
  v6 = 0;
  if ( *(_DWORD *)v5 == 59 )
  {
    v6 = *(_DWORD **)(v5 + 12);
    v5 = *(_DWORD *)(v5 + 8);
  }
  v7 = a1;
  v8 = *(_DWORD *)(a1 + 292);
  v43 = a2;
  *(_DWORD *)(v7 + 292) = -1;
  v42 = v8;
  v9 = *(_BYTE *)(v4 + 1);
  if ( v9 == 82 )
    goto LABEL_40;
  if ( v9 > 82 )
  {
    if ( v9 != 108 )
    {
      if ( v9 == 114 )
      {
        v10 = *(_DWORD *)(v7 + 256);
        v11 = v10 + 1;
        if ( v10 == 255 )
        {
          v39 = *(_DWORD *)(v7 + 268);
          *(_BYTE *)(v7 + 255) = 0;
          (*(void (__fastcall **)(int, int))(v7 + 264))(v4, v11);
          ++*(_DWORD *)(v7 + 296);
          v11 = 1;
          v10 = 0;
        }
        *(_DWORD *)(v7 + 256) = v11;
        v12 = (_DWORD *)v5;
        v13 = "...)";
        *(_BYTE *)(v7 + v10) = 40;
        *(_BYTE *)(v7 + 260) = 40;
        sub_6F89FAB0(v7, v43, v12);
        sub_6F89FA10(v7, v43, v41);
        v14 = *(_DWORD *)(v7 + 256);
        for ( i = 46; ; i = *v13 )
        {
          if ( v14 == 255 )
          {
            v17 = *(_DWORD *)(v7 + 268);
            *(_BYTE *)(v7 + 255) = 0;
            v18 = i;
            (*(void (__cdecl **)(int, signed int, int))(v7 + 264))(v7, 255, v17);
            ++*(_DWORD *)(v7 + 296);
            v14 = 1;
            v16 = 0;
            i = v18;
          }
          else
          {
            v16 = v14++;
          }
          ++v13;
          *(_DWORD *)(v7 + 256) = v14;
          *(_BYTE *)(v7 + v16) = i;
          *(_BYTE *)(v7 + 260) = i;
          if ( v13 == "" )
            break;
        }
      }
      goto LABEL_21;
    }
    v33 = *(_DWORD *)(v7 + 256);
    v34 = "(...";
    for ( j = 40; ; j = *v34 )
    {
      if ( v33 == 255 )
      {
        v37 = *(_DWORD *)(v7 + 268);
        *(_BYTE *)(v7 + 255) = 0;
        v38 = j;
        (*(void (__cdecl **)(int, signed int, int))(v7 + 264))(v7, 255, v37);
        ++*(_DWORD *)(v7 + 296);
        v33 = 1;
        v36 = 0;
        j = v38;
      }
      else
      {
        v36 = v33++;
      }
      ++v34;
      *(_DWORD *)(v7 + 256) = v33;
      *(_BYTE *)(v7 + v36) = j;
      *(_BYTE *)(v7 + 260) = j;
      if ( "" == v34 )
        break;
    }
    sub_6F89FA10(v7, v43, v41);
    v20 = (_DWORD *)v5;
    v21 = v43;
LABEL_18:
    sub_6F89FAB0(v7, v21, v20);
    v23 = *(_DWORD *)(v7 + 256);
    v24 = v23 + 1;
    if ( v23 == 255 )
    {
      v25 = *(_DWORD *)(v7 + 268);
      *(_BYTE *)(v7 + 255) = 0;
      (*(void (__fastcall **)(int, int))(v7 + 264))(v22, v24);
      ++*(_DWORD *)(v7 + 296);
      v24 = 1;
      v23 = 0;
    }
    *(_DWORD *)(v7 + 256) = v24;
    *(_BYTE *)(v7 + v23) = 41;
    *(_BYTE *)(v7 + 260) = 41;
    goto LABEL_21;
  }
  if ( v9 == 76 )
  {
LABEL_40:
    if ( *(_DWORD *)(v7 + 256) == 255 )
    {
      v40 = *(_DWORD *)(v7 + 268);
      *(_BYTE *)(v7 + 255) = 0;
      (*(void (__cdecl **)(int, signed int, int))(v7 + 264))(v7, 255, v40);
      ++*(_DWORD *)(v7 + 296);
      *(_DWORD *)(v7 + 256) = 0;
    }
    v26 = *(_DWORD *)(v7 + 256);
    *(_DWORD *)(v7 + 256) = v26 + 1;
    *(_BYTE *)(v7 + v26) = 40;
    *(_BYTE *)(v7 + 260) = 40;
    sub_6F89FAB0(v7, v43, (_DWORD *)v5);
    v27 = "...";
    sub_6F89FA10(v7, v43, v41);
    v28 = *(_DWORD *)(v7 + 256);
    for ( k = 46; ; k = *v27 )
    {
      if ( v28 == 255 )
      {
        v31 = *(_DWORD *)(v7 + 268);
        *(_BYTE *)(v7 + 255) = 0;
        v32 = k;
        (*(void (__cdecl **)(int, signed int, int))(v7 + 264))(v7, 255, v31);
        ++*(_DWORD *)(v7 + 296);
        v28 = 1;
        v30 = 0;
        k = v32;
      }
      else
      {
        v30 = v28++;
      }
      ++v27;
      *(_DWORD *)(v7 + 256) = v28;
      *(_BYTE *)(v7 + v30) = k;
      *(_BYTE *)(v7 + 260) = k;
      if ( "" == v27 )
        break;
    }
    sub_6F89FA10(v7, v43, v41);
    v20 = v6;
    v21 = v43;
    goto LABEL_18;
  }
LABEL_21:
  *(_DWORD *)(v7 + 292) = v42;
  return 1;
}
