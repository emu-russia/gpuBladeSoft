__int64 __cdecl sub_6F808FD0(_QWORD *a1, int a2, int a3)
{
  int v3; // ebp@1
  int v4; // ecx@4
  int v5; // esi@4
  int v6; // edi@4
  unsigned int v7; // eax@5
  int v8; // ecx@5
  unsigned int v9; // eax@5
  int v10; // ebx@5
  unsigned int v11; // eax@5
  int v12; // ecx@5
  unsigned int v13; // eax@5
  int v14; // ecx@5
  unsigned int v15; // eax@5
  int v16; // ebx@5
  unsigned int v17; // eax@5
  int v18; // ebx@5
  unsigned int v19; // eax@5
  int v20; // ecx@5
  int v21; // ebx@5
  int v22; // eax@5
  unsigned int v23; // ebx@5
  unsigned int v24; // ett@5
  __int64 v25; // rcx@7
  __int64 v26; // rax@7
  __int64 result; // rax@7
  int v28; // [sp+10h] [bp-3Ch]@3
  int v29; // [sp+14h] [bp-38h]@2
  __int64 v30; // [sp+18h] [bp-34h]@3
  _QWORD *v31; // [sp+24h] [bp-28h]@2
  int v32; // [sp+28h] [bp-24h]@1
  _QWORD *v33; // [sp+2Ch] [bp-20h]@1

  v3 = 0;
  v32 = a2 + 1536;
  v33 = a1;
  do
  {
    v31 = v33;
    v29 = v32 - 1536;
    do
    {
      v30 = 0i64;
      v28 = 0;
      do
      {
        v4 = 0;
        v5 = 0;
        v6 = *(_DWORD *)(v29 + 8 * v28);
        do
        {
          v7 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C0[v5]) >> 1)
              + *(unsigned __int16 *)((char *)&word_6FB89480[v5] + v3))
             / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C0[v5]);
          v8 = v7 * v7 + v4;
          v9 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C1[v5]) >> 1)
              + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 1] + v3))
             / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C1[v5]);
          v10 = v8 + v9 * v9;
          v11 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C2[v5]) >> 1)
               + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 2] + v3))
              / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C2[v5]);
          v12 = v10 + v11 * v11;
          v13 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C3[v5]) >> 1)
               + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 3] + v3))
              / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C3[v5]);
          v14 = v13 * v13 + v12;
          v15 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C4[v5]) >> 1)
               + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 4] + v3))
              / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C4[v5]);
          v16 = v14 + v15 * v15;
          v17 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C5[v5]) >> 1)
               + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 5] + v3))
              / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C5[v5]);
          v18 = v17 * v17 + v16;
          v19 = (((unsigned int)*(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C6[v5]) >> 1)
               + *(unsigned __int16 *)((char *)&word_6FB89480[v5 + 6] + v3))
              / *(_WORD *)(v6 + 2 * (unsigned __int8)byte_6FB8E8C6[v5]);
          v20 = v18 + v19 * v19;
          v21 = (unsigned __int8)byte_6FB8E8C7[v5];
          v22 = v5 + 7;
          v5 += 8;
          v23 = *(_WORD *)(v6 + 2 * v21);
          v24 = (v23 >> 1) + *(unsigned __int16 *)((char *)&word_6FB89480[v22] + v3);
          v4 = v24 / v23 * (v24 / v23) + v20;
        }
        while ( v5 != 64 );
        v30 += (unsigned int)v4 * (unsigned __int64)(unsigned __int16)*(&word_6FB89440[3 * a3] + v28++);
      }
      while ( v28 != 3 );
      HIDWORD(v25) = 1610612736;
      LODWORD(v26) = sub_6F80A640(v30, HIDWORD(v30));
      LODWORD(v25) = 0;
      v29 += 24;
      result = (v25 - v26) >> 1;
      *v31 = result;
      ++v31;
    }
    while ( v32 != v29 );
    v3 += 128;
    v32 += 4;
    v33 += 64;
  }
  while ( v3 != 256 );
  return result;
}
