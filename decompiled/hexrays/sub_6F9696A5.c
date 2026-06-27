char __usercall sub_6F9696A5@<al>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi@1
  int v9; // eax@1
  int v10; // eax@3
  int v11; // ebx@3
  int v12; // ecx@3
  int v13; // edx@5
  int v14; // ST00_4@5
  int v15; // eax@5
  signed int v16; // ebx@7
  int v17; // eax@7
  int v18; // edi@11
  signed __int64 v19; // rax@11
  unsigned int v20; // eax@11
  int v21; // ecx@11
  int v22; // edi@15
  int v23; // ecx@15
  int v25; // [sp+0h] [bp-144h]@7
  _WORD *v26; // [sp+4h] [bp-140h]@9
  int v27; // [sp+8h] [bp-13Ch]@9
  int v28; // [sp+Ch] [bp-138h]@9
  int v29; // [sp+10h] [bp-134h]@1
  int v30; // [sp+14h] [bp-130h]@1
  int v31; // [sp+18h] [bp-12Ch]@9
  int *v32; // [sp+20h] [bp-124h]@11
  int v33[69]; // [sp+30h] [bp-114h]@2

  v8 = a1;
  v9 = 0;
  v29 = a2;
  v30 = a3;
  do
    v33[v9++] = 0;
  while ( v9 != 65 );
  v10 = a5 - a4;
  v11 = *(_DWORD *)(v8 + 16);
  v12 = *(_DWORD *)(v8 + 8);
  if ( v11 + a5 - a4 < *(_DWORD *)(v8 + 24) )
    v11 = *(_DWORD *)(v8 + 24) - (a5 - a4);
  v13 = *(_DWORD *)(v8 + 20);
  v14 = v10 + v13;
  v15 = *(_DWORD *)(v8 + 28) - v10;
  if ( v14 > *(_DWORD *)(v8 + 28) )
    v13 = v15;
  v16 = v11 - v12;
  v25 = v13 - v12;
  LOBYTE(v17) = v16 > v13 - v12;
  if ( v16 <= v25 && v25 <= 64 )
  {
    v17 = (unsigned int)v16 >> 31;
    if ( !((unsigned int)v16 >> 31) )
    {
      v28 = 0;
      v27 = a4 - v12;
      v26 = (_WORD *)(a7 + 6);
      v31 = v16 - (a4 - v12);
      while ( v28 < a8 )
      {
        v18 = *v26 - *(v26 - 1);
        v19 = (unsigned int)(((signed int)((unsigned __int64)(v29 * (signed __int64)*(v26 - 2)) >> 32) >> 31) + 0x8000)
            + v29 * (signed __int64)*(v26 - 2);
        v20 = v31 + v30 + (HIDWORD(v19) << 16) + ((unsigned int)v19 >> 16);
        v21 = v16 - v20;
        v32 = &v33[v16 + 0x3FFFFFFF * v20];
        do
        {
          v32[v20] += v18 * dword_6FB6AE60[v20 & 0x3F];
          ++v20;
        }
        while ( v25 >= (signed int)(v21 + v20) );
        ++v28;
        v26 += 24;
      }
      v17 = v30 - v27;
      do
      {
        v22 = v33[v16];
        v23 = a6 - v27 + v16;
        if ( v22 > *(_DWORD *)(v8 + 52) || v22 == *(_DWORD *)(v8 + 52) && *(_DWORD *)(v8 + 56) > v23 )
        {
          *(_DWORD *)(v8 + 52) = v22;
          *(_DWORD *)(v8 + 56) = v23;
          *(_DWORD *)(v8 + 44) = v29;
          *(_DWORD *)(v8 + 48) = v17 + v16;
        }
        ++v16;
      }
      while ( v25 >= v16 );
    }
  }
  return v17;
}
