__int16 __stdcall GPUaddVertex(__int16 a1, __int16 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  float v6; // ST40_4@1
  float v7; // ST3C_4@1
  double v8; // st7@1
  double v9; // st6@1
  int v10; // eax@1
  signed int v11; // ebp@6
  signed int v12; // ebp@8
  int v13; // edi@8
  signed int v14; // ebp@10
  unsigned int v15; // edx@10
  int v16; // edi@11
  int v17; // edx@11
  double v18; // rt1@12
  double v19; // st6@12
  double v20; // st7@12
  int v21; // edi@15
  int v22; // edi@17
  int v23; // edx@17
  int v24; // edx@19
  _DWORD *v25; // eax@18
  void *v26; // eax@16
  float v27; // ST48_4@20
  float v28; // ST44_4@20
  _DWORD *v29; // eax@20
  signed int v31; // [sp+38h] [bp-34h]@8
  unsigned int v32; // [sp+3Ch] [bp-30h]@10
  int v33; // [sp+40h] [bp-2Ch]@10

  v6 = (double)a4 * 0.000015258789;
  v7 = 0.000015258789 * (double)a3;
  nullsub_10();
  v8 = v7;
  v9 = v6;
  LOWORD(v10) = a2;
  if ( (dword_6FBB5540 || dword_6FBB553C == 2) && (unsigned __int16)(a1 + 2048) <= 0xFFFu )
  {
    LOWORD(v10) = a2 + 2048;
    if ( (unsigned __int16)(a2 + 2048) <= 0xFFFu )
    {
      v11 = a1 + 2055;
      if ( a1 + 2048 >= 0 )
        v11 = a1 + 2048;
      v31 = v11 >> 3;
      v12 = a2 + 2055;
      v13 = a2 + 2048;
      if ( v13 >= 0 )
        v12 = a2 + 2048;
      v14 = v12 >> 3;
      v32 = ((((unsigned int)((a1 + 2048) >> 31) >> 29) + (_BYTE)a1) & 7) - ((unsigned int)((a1 + 2048) >> 31) >> 29);
      v15 = (unsigned int)((unsigned __int64)v13 >> 32) >> 29;
      LOWORD(v10) = (((_BYTE)v15 + (_BYTE)a2) & 7) - v15;
      v33 = (((_BYTE)v15 + (_BYTE)a2) & 7) - v15;
      if ( dword_6FBB5540 )
      {
        v16 = v31 + (v14 << 9);
        v17 = dword_6FF41420[v16];
        if ( v17 )
        {
          v18 = v9;
          v19 = v8;
          v20 = v18;
        }
        else
        {
          v27 = v8;
          v28 = v9;
          v29 = sub_6F961B40(1024);
          dword_6FF41420[v16] = (int)v29;
          v17 = (int)v29;
          *v29 = 0;
          v29[127] = 0;
          memset(
            (void *)((unsigned int)(v29 + 1) & 0xFFFFFFFC),
            0,
            4 * (((unsigned int)v29 + -((unsigned int)(v29 + 1) & 0xFFFFFFFC) + 512) >> 2));
          v20 = v28;
          v19 = v27;
        }
        v10 = 16 * (v32 + 8 * v33);
        *(_QWORD *)(v17 + v10) = (signed __int64)v19;
        *(_QWORD *)(dword_6FF41420[v31 + (v14 << 9)] + v10 + 8) = (signed __int64)v20;
      }
      if ( dword_6FBB553C == 2 )
      {
        v21 = v31 + (v14 << 9);
        if ( !dword_6FE41420[v21] )
        {
          v26 = sub_6F961B40(147456);
          dword_6FE41420[v21] = (int)v26;
          memset(v26, 0, 0x4800u);
        }
        v22 = v31 + (v14 << 9);
        v23 = dword_6FD41420[v22];
        if ( !v23 )
        {
          v25 = sub_6F961B40(64);
          dword_6FD41420[v22] = (int)v25;
          v23 = (int)v25;
          *v25 = 0;
          v25[15] = 0;
          memset(
            (void *)((unsigned int)(v25 + 1) & 0xFFFFFFFC),
            0,
            4 * (((unsigned int)v25 + -((unsigned int)(v25 + 1) & 0xFFFFFFFC) + 64) >> 2));
        }
        v10 = v32 + 8 * v33;
        *(_BYTE *)(v23 + v10) = 0;
        v24 = dword_6FE41420[v31 + (v14 << 9)] + 2304 * v10;
        *(_DWORD *)(v24 + 16) = a5;
        *(_DWORD *)(v24 + 20) = a6;
      }
    }
  }
  return v10;
}
