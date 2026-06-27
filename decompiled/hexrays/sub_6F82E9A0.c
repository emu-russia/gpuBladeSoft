__m64 *__usercall sub_6F82E9A0@<eax>(__m64 a1@<mm0>, int a2, int a3, int a4, int a5, signed int a6, unsigned __int16 a7)
{
  int v7; // ebp@3
  int v8; // eax@3
  int v9; // ecx@3
  __m64 *v10; // edi@3
  signed int v11; // eax@4
  __m64 *result; // eax@5
  __m64 v13; // mm0@6
  __m64 v14; // mm0@6
  int v15; // [sp+2Ch] [bp-30h]@4
  int v16; // [sp+38h] [bp-24h]@4
  int v17; // [sp+3Ch] [bp-20h]@5

  if ( a6 <= 1 )
  {
    v13 = _mm_cvtsi32_si64((unsigned __int16)((*(_WORD *)a5 * a7 + 15) >> 5));
    v14 = _m_punpcklwd(v13, v13);
    a1 = _m_punpckldq(v14, v14);
    *(__m64 *)a5 = a1;
    *(__m64 *)(a5 + 8) = a1;
    *(__m64 *)(a5 + 16) = a1;
    *(__m64 *)(a5 + 24) = a1;
    *(__m64 *)(a5 + 32) = a1;
    *(__m64 *)(a5 + 40) = a1;
    *(__m64 *)(a5 + 48) = a1;
    *(__m64 *)(a5 + 56) = a1;
    *(__m64 *)(a5 + 64) = a1;
    *(__m64 *)(a5 + 72) = a1;
    *(__m64 *)(a5 + 80) = a1;
    *(__m64 *)(a5 + 88) = a1;
    *(__m64 *)(a5 + 96) = a1;
    *(__m64 *)(a5 + 104) = a1;
    *(__m64 *)(a5 + 112) = a1;
    *(__m64 *)(a5 + 120) = a1;
  }
  else
  {
    *(_WORD *)a5 *= a7;
    sub_6F82E000(a5, a6);
  }
  v7 = *(_DWORD *)(a2 + 4 * a4 + 496);
  v8 = *(_DWORD *)(*(_DWORD *)(a2 + 208) + 4 * a3);
  v9 = *(_BYTE *)(*(_DWORD *)(a2 + 204) + 4 * a3 + 1) & 7;
  v10 = (__m64 *)(v8 + *(_DWORD *)(a2 + 4 * *(_DWORD *)(a2 + 280) + 480));
  if ( v9 == 1 )
  {
    result = (__m64 *)sub_6F818BA0(a1, v10, v7, a5);
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 4 * *(_DWORD *)(a2 + 4 * ((268505377 >> 4 * v9) & 0xF) + 272) + 480) + v8;
    LOBYTE(v11) = sub_6F818550(
                    a2,
                    (int)&v16,
                    a4,
                    *(_BYTE *)(*(_DWORD *)(a2 + 212) + 2 * a3),
                    *(_BYTE *)(*(_DWORD *)(a2 + 212) + 2 * a3 + 1));
    if ( v11 <= 1 )
      result = (__m64 *)sub_6F818C70(v10, (__m64 *)(v15 + v16), v7, a5);
    else
      result = sub_6F818D80(v10, (__m64 *)(v15 + v16), (__m64 *)(v15 + v17), v7, a5);
  }
  return result;
}
