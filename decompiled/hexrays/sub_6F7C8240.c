signed int __cdecl sub_6F7C8240(int *a1, int a2, int a3, signed int a4)
{
  signed int result; // eax@1
  char v5; // dl@4
  int v6; // edi@5
  int v7; // ecx@5
  int v8; // esi@6
  int v9; // ebx@11
  int v10; // ecx@11
  signed int v11; // edi@11
  unsigned int v12; // esi@11
  signed int v13; // ebp@11
  unsigned int v14; // ebx@14
  unsigned int v15; // ecx@18
  unsigned int v16; // esi@18
  _BYTE *v17; // eax@19
  int v18; // eax@24
  _BYTE *v19; // ebx@25
  _BYTE *v20; // esi@25
  char v21; // al@26
  unsigned __int8 *v22; // edi@33
  _BYTE *v23; // ebp@33
  int v24; // eax@34
  int v25; // esi@34
  unsigned __int8 *v26; // esi@35
  _BYTE *v27; // ecx@35
  unsigned __int8 *v28; // edx@35
  char v29; // al@36
  _BYTE *v30; // edx@37
  int v31; // edi@43
  int v32; // ebx@44
  int v33; // ebp@44
  int v34; // edx@45
  char *v35; // esi@45
  char *v36; // ecx@45
  char v37; // al@46
  int v38; // eax@47
  int v39; // ebx@48
  int v40; // ecx@49
  int v41; // ebx@49
  char v42; // dl@50
  size_t v43; // esi@53
  unsigned int v44; // ebx@53
  char *v45; // edi@54
  char *v46; // ebp@54
  int v47; // edi@58
  int v48; // ebx@59
  int v49; // ebp@59
  int v50; // edx@60
  _BYTE *v51; // esi@60
  _BYTE *v52; // ebx@60
  unsigned int v53; // eax@61
  int v54; // eax@62
  int v55; // ebx@63
  int v56; // ecx@64
  int v57; // ebx@64
  char v58; // dl@65
  _BYTE *v59; // eax@68
  _BYTE *v60; // edx@68
  int v61; // [sp+20h] [bp-3Ch]@11
  int v62; // [sp+20h] [bp-3Ch]@25
  int v63; // [sp+20h] [bp-3Ch]@34
  unsigned int v64; // [sp+20h] [bp-3Ch]@43
  unsigned int v65; // [sp+20h] [bp-3Ch]@58
  _BYTE *v66; // [sp+24h] [bp-38h]@6
  unsigned int v67; // [sp+24h] [bp-38h]@33
  _BYTE *v68; // [sp+28h] [bp-34h]@5
  unsigned int i; // [sp+2Ch] [bp-30h]@23
  int v70; // [sp+3Ch] [bp-20h]@1

  result = 33;
  v70 = 0;
  if ( !a1 )
    return result;
  if ( !a2 || !a3 )
    return 6;
  v5 = *(_BYTE *)(a2 + 18);
  if ( (unsigned __int8)(v5 - 1) <= 6u )
  {
    v9 = 0;
    v61 = *a1;
    v10 = *(_DWORD *)a3;
    v11 = *(_DWORD *)(a3 + 8);
    *(_BYTE *)(a3 + 18) = 2;
    v12 = *(_DWORD *)a2;
    *(_DWORD *)a3 = *(_DWORD *)a2;
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(a2 + 4);
    v13 = *(_DWORD *)(a2 + 4);
    if ( a4 > 0 )
    {
      v9 = a4 - v13 % a4;
      if ( !(v13 % a4) )
        v9 = 0;
    }
    v14 = v13 + v9;
    if ( (signed int)v14 <= 0 || v12 <= 0xFFFFFFFF / v14 )
    {
      v15 = ((v11 ^ (v11 >> 31)) - (v11 >> 31)) * v10;
      v16 = v14 * v12;
      if ( v15 < v16 )
      {
        v59 = sub_6F773C80(v61, 1, v15, v16, *(void **)(a3 + 12), &v70);
        v60 = v59;
        *(_DWORD *)(a3 + 12) = v59;
        result = v70;
        if ( v70 )
          return result;
        v11 = *(_DWORD *)(a3 + 8);
        v17 = v60;
      }
      else
      {
        v17 = *(_BYTE **)(a3 + 12);
      }
      v68 = v17;
      v7 = -v14;
      if ( v11 >= 0 )
        v7 = v14;
      result = 0;
      *(_DWORD *)(a3 + 8) = v7;
      v6 = a2;
      v5 = *(_BYTE *)(a2 + 18);
      goto LABEL_6;
    }
    return 6;
  }
  v6 = a2;
  v70 = 6;
  v7 = *(_DWORD *)(a3 + 8);
  v68 = *(_BYTE **)(a3 + 12);
  result = 6;
LABEL_6:
  v66 = *(_BYTE **)(v6 + 12);
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 < 0 )
    v66 -= v8 * (*(_DWORD *)a2 - 1);
  if ( v7 < 0 )
    v68 -= v7 * (*(_DWORD *)a3 - 1);
  switch ( v5 )
  {
    default:
      return result;
    case 7:
      *(_WORD *)(a3 + 16) = 256;
      for ( i = *(_DWORD *)a2; i; --i )
      {
        v18 = *(_DWORD *)(a2 + 4);
        if ( v18 )
        {
          v19 = v66;
          v20 = v68;
          v62 = (int)&v68[v18];
          do
          {
            v21 = 0;
            if ( v19[3] )
              v21 = v19[3]
                  - ((4732 * *v19 * *v19 + 46871 * v19[1] * v19[1] + 13933 * v19[2] * (unsigned int)v19[2]) >> 16)
                  / v19[3];
            *v20 = v21;
            v19 += 4;
            ++v20;
          }
          while ( v20 != (_BYTE *)v62 );
          v8 = *(_DWORD *)(a2 + 8);
          v7 = *(_DWORD *)(a3 + 8);
        }
        v66 += v8;
        v68 += v7;
      }
      return v70;
    case 4:
      *(_WORD *)(a3 + 16) = 16;
      if ( *(_DWORD *)a2 )
      {
        v22 = v66;
        v67 = *(_DWORD *)a2;
        v23 = v68;
        do
        {
          v24 = *(_DWORD *)(a2 + 4);
          v25 = *(_DWORD *)(a2 + 4) >> 1;
          v63 = v25;
          if ( v25 )
          {
            v26 = &v22[v25];
            v27 = v23;
            v28 = v22;
            do
            {
              v29 = *v28++;
              v27 += 2;
              *(v27 - 1) = v29 & 0xF;
              *(v27 - 2) = (v29 & 0xF0) >> 4;
            }
            while ( v28 != v26 );
            v30 = &v23[2 * v63];
            v24 = *(_DWORD *)(a2 + 4);
          }
          else
          {
            v30 = v23;
            v26 = v22;
          }
          if ( v24 & 1 )
            *v30 = *v26 >> 4;
          v22 += *(_DWORD *)(a2 + 8);
          v23 += *(_DWORD *)(a3 + 8);
          --v67;
        }
        while ( v67 );
      }
      break;
    case 3:
      *(_WORD *)(a3 + 16) = 4;
      if ( *(_DWORD *)a2 )
      {
        v31 = (int)v68;
        v64 = *(_DWORD *)a2;
        do
        {
          v32 = *(_DWORD *)(a2 + 4);
          v33 = *(_DWORD *)(a2 + 4) >> 2;
          if ( v33 )
          {
            v34 = v31;
            v35 = &v66[v33];
            v36 = v66;
            do
            {
              v37 = *v36++;
              v34 += 4;
              *(_BYTE *)(v34 - 4) = (v37 & 0xC0) >> 6;
              *(_BYTE *)(v34 - 3) = (v37 & 0x30) >> 4;
              *(_BYTE *)(v34 - 1) = v37 & 3;
              *(_BYTE *)(v34 - 2) = (v37 & 0xC) >> 2;
            }
            while ( v36 != v35 );
            v38 = v31 + 4 * v33;
            v32 = *(_DWORD *)(a2 + 4);
          }
          else
          {
            v38 = v31;
            v35 = v66;
          }
          v39 = v32 & 3;
          if ( v39 )
          {
            v40 = (unsigned __int8)*v35;
            v41 = v38 + v39;
            do
            {
              v42 = v40;
              ++v38;
              v40 *= 4;
              *(_BYTE *)(v38 - 1) = (v42 & 0xC0) >> 6;
            }
            while ( v38 != v41 );
          }
          v31 += *(_DWORD *)(a3 + 8);
          v66 += *(_DWORD *)(a2 + 8);
          --v64;
        }
        while ( v64 );
      }
      break;
    case 2:
    case 5:
    case 6:
      v43 = *(_DWORD *)(a2 + 4);
      *(_WORD *)(a3 + 16) = 256;
      v44 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 )
      {
        v45 = v66;
        v46 = v68;
        do
        {
          memcpy(v46, v45, v43);
          v45 += *(_DWORD *)(a2 + 8);
          v46 += *(_DWORD *)(a3 + 8);
          --v44;
        }
        while ( v44 );
      }
      break;
    case 1:
      *(_WORD *)(a3 + 16) = 2;
      if ( *(_DWORD *)a2 )
      {
        v47 = (int)v68;
        v65 = *(_DWORD *)a2;
        do
        {
          v48 = *(_DWORD *)(a2 + 4);
          v49 = *(_DWORD *)(a2 + 4) >> 3;
          if ( v49 )
          {
            v50 = v47;
            v51 = &v66[v49];
            v52 = v66;
            do
            {
              v53 = *v52++;
              v50 += 8;
              *(_BYTE *)(v50 - 8) = (signed int)(v53 & 0x80) >> 7;
              *(_BYTE *)(v50 - 7) = (v53 >> 6) & 1;
              *(_BYTE *)(v50 - 6) = (v53 >> 5) & 1;
              *(_BYTE *)(v50 - 5) = (v53 >> 4) & 1;
              *(_BYTE *)(v50 - 4) = (v53 >> 3) & 1;
              *(_BYTE *)(v50 - 3) = (v53 >> 2) & 1;
              *(_BYTE *)(v50 - 1) = v53 & 1;
              *(_BYTE *)(v50 - 2) = (v53 >> 1) & 1;
            }
            while ( v52 != v51 );
            v54 = v47 + 8 * v49;
            v48 = *(_DWORD *)(a2 + 4);
          }
          else
          {
            v54 = v47;
            v51 = v66;
          }
          v55 = v48 & 7;
          if ( v55 )
          {
            v56 = *v51;
            v57 = v54 + v55;
            do
            {
              v58 = v56;
              ++v54;
              v56 *= 2;
              *(_BYTE *)(v54 - 1) = (v58 & 0x80) >> 7;
            }
            while ( v54 != v57 );
          }
          v47 += *(_DWORD *)(a3 + 8);
          v66 += *(_DWORD *)(a2 + 8);
          --v65;
        }
        while ( v65 );
      }
      break;
  }
  return v70;
}
