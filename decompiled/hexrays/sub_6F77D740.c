unsigned int __usercall sub_6F77D740@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v5; // edi@1
  int v6; // esi@1
  signed __int64 v7; // rax@1
  unsigned int v8; // ebp@1
  signed __int64 v9; // rax@1
  int v10; // ebp@1
  unsigned int v11; // ecx@3
  unsigned int v12; // ebp@3
  int v13; // eax@3
  int v14; // edx@8
  int v15; // eax@9
  int v16; // edi@13
  signed __int64 v17; // rax@13
  unsigned int v18; // ebx@13
  signed __int64 v19; // rax@14
  int v20; // edi@15
  signed __int64 v21; // rax@15
  unsigned int v22; // ebp@15
  signed __int64 v23; // rax@15
  signed __int64 v24; // rax@15
  int v25; // ebp@15
  signed __int64 v26; // rax@15
  unsigned int result; // eax@15
  signed __int64 v28; // rax@17
  int v29; // [sp+0h] [bp-18h]@1
  int v30; // [sp+4h] [bp-14h]@1

  v5 = a2;
  v6 = a1;
  v30 = a3;
  v7 = (unsigned int)(((signed int)((unsigned __int64)(a4 * (signed __int64)*(_DWORD *)(a1 + 11644)) >> 32) >> 31)
                    + 0x8000)
     + a4 * (signed __int64)*(_DWORD *)(a1 + 11644);
  v8 = (HIDWORD(v7) << 16) + ((unsigned int)v7 >> 16);
  v9 = (unsigned int)(((signed int)((unsigned __int64)(a5 * (signed __int64)*(_DWORD *)(v6 + 11648)) >> 32) >> 31)
                    + 0x8000)
     + a5 * (signed __int64)*(_DWORD *)(v6 + 11648);
  LODWORD(v9) = v8 + (HIDWORD(v9) << 16) + ((unsigned int)v9 >> 16);
  v10 = *(_DWORD *)(v5 + 20);
  v29 = v9;
  if ( !v10 || !*(_BYTE *)(v5 + 13) )
  {
    v19 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v5 + 16) * (signed __int64)a5) >> 32) >> 31)
                       + 0x8000)
        + *(_DWORD *)(v5 + 16) * (signed __int64)a5;
    v18 = (HIDWORD(v19) << 16) + ((unsigned int)v19 >> 16);
    goto LABEL_15;
  }
  v11 = *(_DWORD *)(v5 + 24);
  v12 = v10 - 1;
  v13 = v5 + 20 * v11 + 56;
  while ( v11 < v12 )
  {
    v13 += 20;
    if ( a5 < *(_DWORD *)(v13 - 20) )
      break;
    ++v11;
  }
  if ( !v11 )
    goto LABEL_12;
  v14 = *(_DWORD *)(v5 + 20 * v11 + 36);
  if ( a5 < v14 )
  {
    v15 = v5 + 20 * v11 + 16;
    while ( --v11 )
    {
      v15 -= 20;
      v14 = *(_DWORD *)(v15 + 20);
      if ( a5 >= v14 )
        goto LABEL_16;
    }
LABEL_12:
    v14 = *(_DWORD *)(v5 + 36);
    v11 = 0;
    *(_DWORD *)(v5 + 24) = 0;
    if ( a5 < v14 )
    {
      v28 = *(_DWORD *)(v5 + 16) * (signed __int64)(a5 - v14);
      v18 = *(_DWORD *)(v5 + 40)
          + (((unsigned __int64)(unsigned int)((SHIDWORD(v28) >> 31) + 0x8000) + v28) >> 32 << 16)
          + ((unsigned int)((SHIDWORD(v28) >> 31) + 0x8000 + v28) >> 16);
      goto LABEL_15;
    }
    goto LABEL_13;
  }
LABEL_16:
  *(_DWORD *)(v5 + 24) = v11;
LABEL_13:
  v16 = v5 + 20 * v11;
  v17 = *(_DWORD *)(v16 + 44) * (signed __int64)(a5 - v14);
  v18 = *(_DWORD *)(v16 + 40)
      + (((unsigned __int64)(unsigned int)((SHIDWORD(v17) >> 31) + 0x8000) + v17) >> 32 << 16)
      + ((unsigned int)((SHIDWORD(v17) >> 31) + 0x8000 + v17) >> 16);
LABEL_15:
  v20 = *(_DWORD *)v6;
  v21 = (unsigned int)(((signed int)((unsigned __int64)(v29 * (signed __int64)*(_DWORD *)(*(_DWORD *)v6 + 60)) >> 32) >> 31)
                     + 0x8000)
      + v29 * (signed __int64)*(_DWORD *)(*(_DWORD *)v6 + 60);
  v22 = (HIDWORD(v21) << 16) + ((unsigned int)v21 >> 16);
  v23 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v18 * (signed __int64)*(_DWORD *)(*(_DWORD *)v6 + 68)) >> 32) >> 31)
                     + 0x8000)
      + (signed int)v18 * (signed __int64)*(_DWORD *)(*(_DWORD *)v6 + 68);
  *(_DWORD *)v30 = *(_DWORD *)(v6 + 11656) + v22 + (HIDWORD(v23) << 16) + ((unsigned int)v23 >> 16);
  v24 = v29 * (signed __int64)*(_DWORD *)(v20 + 64);
  v25 = (((unsigned __int64)(unsigned int)((SHIDWORD(v24) >> 31) + 0x8000) + v24) >> 32 << 16)
      + ((unsigned int)((SHIDWORD(v24) >> 31) + 0x8000 + v24) >> 16);
  v26 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v18 * (signed __int64)*(_DWORD *)(v20 + 72)) >> 32) >> 31)
                     + 0x8000)
      + (signed int)v18 * (signed __int64)*(_DWORD *)(v20 + 72);
  result = *(_DWORD *)(v6 + 11660) + v25 + (HIDWORD(v26) << 16) + ((unsigned int)v26 >> 16);
  *(_DWORD *)(v30 + 4) = result;
  return result;
}
