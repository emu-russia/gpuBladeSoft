signed int __cdecl sub_6F729160(_DWORD *a1)
{
  _DWORD *v1; // ecx@1
  int v2; // ebp@1
  signed int result; // eax@4
  int v4; // ebx@5
  int v5; // edx@6
  unsigned int v6; // eax@6
  int v7; // esi@6
  int v8; // ebp@7
  bool v9; // zf@7
  int v10; // ebp@9
  void (__cdecl *v11)(int, int, int, int, int, int, int); // ebx@10
  int v12; // edi@10
  int v13; // eax@10
  unsigned int v14; // esi@12
  int v15; // ebx@20
  unsigned int v16; // eax@20
  int v17; // ebp@20
  int v18; // eax@21
  unsigned int v19; // ST28_4@24
  int v20; // eax@25
  unsigned int v21; // ST28_4@25
  int v22; // eax@26
  unsigned int v23; // ST28_4@26
  unsigned int v24; // edi@27
  unsigned int v25; // edi@27
  int v26; // edi@27
  unsigned int v27; // ST00_4@27
  int v28; // edi@27
  unsigned int v29; // ST28_4@27
  const char *v30; // [sp+4h] [bp-48h]@1
  const char *v31; // [sp+4h] [bp-48h]@12
  int v32; // [sp+4h] [bp-48h]@20
  int v33; // [sp+8h] [bp-44h]@1
  int v34; // [sp+Ch] [bp-40h]@1
  int v35; // [sp+10h] [bp-3Ch]@1
  int v36; // [sp+14h] [bp-38h]@1
  int v37; // [sp+18h] [bp-34h]@1
  signed int v38; // [sp+2Ch] [bp-20h]@12

  v37 = 4 * *(_WORD *)(dword_6FCFFF7C + 4);
  v36 = *(_WORD *)(dword_6FCFFF7C + 6);
  v35 = *(_DWORD *)(dword_6FCFFF7C + 8);
  v34 = *(_DWORD *)(dword_6FCFFF7C + 4);
  v30 = "[GPU] (dma)(2) Transfer [%x][%x][%x] [%x][%x]\n";
  v33 = *(_DWORD *)dword_6FCFFF7C;
  nullsub_10();
  v1 = (_DWORD *)dword_6FCFFF7C;
  v2 = *(_DWORD *)(dword_6FCFFF7C + 8);
  if ( v2 == 16777729 )
  {
    v4 = 0;
    if ( *(_WORD *)(dword_6FCFFF7C + 4) )
    {
      do
      {
        v5 = *v1 + 4 * v4++;
        v6 = dword_70041424(v5, v30);
        v30 = 0;
        sub_6F724020(v6);
        v1 = (_DWORD *)dword_6FCFFF7C;
        v7 = *(_WORD *)(dword_6FCFFF7C + 4);
      }
      while ( v7 > v4 );
      goto LABEL_7;
    }
  }
  else
  {
    if ( v2 == 16778241 )
    {
      dword_70041E9C = 0xFFFFFF;
      v31 = "[GPU]   gpuDmaChain start: 0x%.8x\n";
      v14 = *(_DWORD *)dword_6FCFFF7C & 0x1FFFFF;
      byte_6FBB979F &= 0xEBu;
      dword_70041E98 = 0xFFFFFF;
      dword_70041E94 = 0xFFFFFF;
      nullsub_10();
      v38 = 2000002;
      while ( 1 )
      {
        if ( dword_6FBB51E0 == 512 )
          v14 &= 0x1FFFFCu;
        if ( !--v38 )
          break;
        if ( v14 != dword_70041E98 && v14 != dword_70041E9C )
        {
          if ( v14 < dword_70041E94 )
            dword_70041E98 = v14;
          else
            dword_70041E9C = v14;
          dword_70041E94 = v14;
          v15 = v14 + 4;
          v16 = (unsigned int)dword_70041424(v14, v31) >> 24;
          v17 = v14 + 4 + 4 * v16;
          if ( v16 )
          {
            v18 = ((unsigned __int8)((4 * v16 - 4) >> 2) + 1) & 3;
            if ( !(((unsigned __int8)((unsigned int)(v17 - v15 - 4) >> 2) + 1) & 3) )
              goto LABEL_35;
            if ( v18 != 1 )
            {
              if ( v18 != 2 )
              {
                v19 = dword_70041424(v14 + 4, v32);
                nullsub_10();
                v32 = 0;
                v15 = v14 + 8;
                sub_6F724020(v19);
              }
              v20 = dword_70041424(v15, v32);
              v15 += 4;
              v21 = v20;
              nullsub_10();
              v32 = 0;
              sub_6F724020(v21);
            }
            v22 = dword_70041424(v15, v32);
            v15 += 4;
            v23 = v22;
            nullsub_10();
            v32 = 0;
            sub_6F724020(v23);
            if ( v17 != v15 )
            {
LABEL_35:
              do
              {
                v24 = dword_70041424(v15, v32);
                nullsub_10();
                sub_6F724020(v24);
                v25 = dword_70041424(v15 + 4, 0);
                nullsub_10();
                sub_6F724020(v25);
                v26 = dword_70041424(v15 + 8, 0);
                nullsub_10();
                v27 = v26;
                v28 = v15 + 12;
                v15 += 16;
                sub_6F724020(v27);
                v29 = dword_70041424(v28, 0);
                nullsub_10();
                v32 = 0;
                sub_6F724020(v29);
              }
              while ( v17 != v15 );
            }
          }
          v14 = dword_70041424(v14, v32) & 0xFFFFFF;
          if ( v14 != 0xFFFFFF )
            continue;
        }
        goto LABEL_29;
      }
      nullsub_10();
LABEL_29:
      nullsub_10();
      byte_6FBB979F |= 0x14u;
      return 1;
    }
    if ( v2 != 16777728 )
      return 1;
    v10 = 0;
    if ( *(_WORD *)(dword_6FCFFF7C + 4) )
    {
      do
      {
        v11 = (void (__cdecl *)(int, int, int, int, int, int, int))dword_70041428;
        v12 = *v1 + 4 * v10++;
        v13 = sub_6F71EB20();
        v11(v13, v12, v33, v34, v35, v36, v37);
        v1 = (_DWORD *)dword_6FCFFF7C;
        v7 = *(_WORD *)(dword_6FCFFF7C + 4);
      }
      while ( v7 > v10 );
      goto LABEL_7;
    }
  }
  v7 = 0;
LABEL_7:
  *a1 += v7;
  *(_DWORD *)dword_6FCFFF7C += 4 * *(_WORD *)(dword_6FCFFF7C + 4);
  v8 = dword_6FCFFF7C;
  v9 = *(_WORD *)(dword_6FCFFF7C + 6) == 1;
  --*(_WORD *)(v8 + 6);
  if ( v9 )
    return 1;
  result = 0;
  *(_DWORD *)(v8 + 12) = *(_WORD *)(v8 + 4);
  return result;
}
