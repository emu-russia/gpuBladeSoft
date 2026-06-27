__int16 __cdecl sub_6F6FD7B0(_WORD *a1, int a2, int a3, int a4, unsigned __int8 a5, unsigned __int8 a6, unsigned __int8 a7)
{
  int v7; // eax@1
  int v8; // edx@2
  int v9; // esi@2

  v7 = *a1;
  if ( (signed __int16)v7 >= 0 )
  {
    v7 *= 16;
    v8 = (*(int *)((char *)dword_6FBBFE54 + v7) - a6) & ~((unsigned __int64)(*(int *)((char *)dword_6FBBFE54 + v7) - a6) >> 32);
    v9 = (((*(int *)((char *)dword_6FBBFE50 + v7) - a5) & ~((*(int *)((char *)dword_6FBBFE50 + v7) - a5) >> 31)) >> 3) & 0x1F;
    LOWORD(v7) = (((unsigned __int16)(*(_WORD *)((char *)&dword_6FBBFE50[2] + v7) - a7) & (unsigned __int16)~((*(int *)((char *)&dword_6FBBFE50[2] + v7) - a7) >> 31)) << 7) & 0x7C00;
    *a1 = v7 | v9 | 4 * v8 & 0x3E0;
  }
  return v7;
}
