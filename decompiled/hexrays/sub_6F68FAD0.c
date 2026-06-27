unsigned int __usercall sub_6F68FAD0@<eax>(_WORD *a1@<eax>, unsigned int *a2@<edx>, int a3@<ecx>, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  unsigned int *v7; // ebp@1
  _WORD *v8; // esi@1
  __int64 v9; // rax@1
  int v10; // ST1C_4@1
  signed int v11; // edi@1
  __int64 v12; // rcx@1
  unsigned int result; // eax@1
  int v14; // [sp+20h] [bp-3Ch]@1
  int v15; // [sp+24h] [bp-38h]@1
  int v16; // [sp+28h] [bp-34h]@1

  v7 = a2;
  v8 = a1;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  dword_6FCFFE50(a3, a4, &v14);
  v9 = (v14 & ~(v14 >> 31)) - 255;
  v10 = (HIDWORD(v9) & v9) + 255;
  HIDWORD(v9) = 16 * *v8;
  v11 = *(int *)((char *)&dword_6FBBFE50[1] + HIDWORD(v9))
      - (((((v15 & ~(v15 >> 31)) - 255) >> 31) & ((v15 & ~(v15 >> 31)) - 255))
       + 255);
  LODWORD(v9) = *(int *)((char *)&dword_6FBBFE50[2] + HIDWORD(v9))
              - (((((v16 & ~(v16 >> 31)) - 255) >> 31) & ((v16 & ~(v16 >> 31)) - 255))
               + 255);
  *v8 = (((unsigned __int16)~(unsigned __int16)((signed int)v9 >> 31) & (unsigned __int16)v9) << 7) & 0x7C00 | 4 * (~(unsigned __int16)(v11 >> 31) & v11) & 0x3E0 | ((~((*(int *)((char *)dword_6FBBFE50 + HIDWORD(v9)) - v10) >> 31) & (*(int *)((char *)dword_6FBBFE50 + HIDWORD(v9)) - v10)) >> 3) & 0x1F;
  HIDWORD(v9) = *v7;
  v12 = (unsigned __int8)*v7 - a5;
  result = ~HIDWORD(v12) & v12 | ((~(((unsigned __int8)(*v7 >> 16) - a7) >> 31) & ((unsigned __int8)(*v7 >> 16) - a7)) << 16) | (((BYTE5(v9) - a6) & ~((BYTE5(v9) - a6) >> 31)) << 8);
  *v7 = result;
  *v8 |= ((HIBYTE(word_6FBB979C) >> 3) & 1) << 15;
  return result;
}
