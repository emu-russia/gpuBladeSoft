int __usercall sub_6F82BA80@<eax>(__m64 a1@<mm6>, int a2, int a3, __m64 *a4, __m64 *a5)
{
  __m64 v5; // mm2@1
  __m64 v6; // mm3@1
  __m64 v7; // mm7@1
  __m64 *v8; // ecx@1
  __m64 *v9; // ebx@1
  __m64 v10; // mm1@1
  __m64 v11; // mm2@1
  __m64 v12; // mm1@1
  __m64 v13; // mm3@1
  __m64 v14; // mm0@1
  __m64 *v15; // edx@1
  __m64 v16; // mm5@1
  __m64 v17; // mm2@1
  __m64 v18; // mm6@1
  __m64 v19; // mm5@1
  unsigned int v20; // eax@1
  __m64 v21; // mm6@1
  __m64 *v22; // ecx@1
  __m64 v23; // mm0@1
  __m64 v24; // mm6@1
  __m64 *v25; // ebx@1
  __m64 v26; // mm1@1
  __m64 v27; // mm2@1
  __m64 v28; // mm1@1
  __m64 v29; // mm3@1
  __m64 v30; // mm6@1
  __m64 v31; // mm0@1
  __m64 v32; // mm4@1
  __m64 *v33; // edx@1
  __m64 v34; // mm5@1
  __m64 v35; // mm2@1
  __m64 v36; // mm6@1
  __m64 *v37; // ecx@1
  __m64 v38; // mm0@1
  __m64 v39; // mm6@1
  __m64 *v40; // ebx@1

  v5 = *(__m64 *)((char *)a5 + a3);
  v6 = *(__m64 *)((char *)a5 + (_DWORD)a4);
  v7 = _m_psubb(0i64, _m_pcmpeqb(a1, a1));
  v8 = (__m64 *)(a3 + 2 * (_DWORD)a5);
  v9 = (__m64 *)((char *)a4 + 2 * (_DWORD)a5);
  v10 = v5;
  v11 = _m_pavgb(v5, v6);
  v12 = _m_pxor(v10, v6);
  v13 = *(__m64 *)((char *)a5 + (_DWORD)v9);
  v14 = (__m64)v8->m64_u64;
  v15 = (__m64 *)(a2 + 2 * (_DWORD)a5);
  v16 = _m_psadbw(*(__m64 *)((char *)a5 + a2), _m_psubb(v11, _m_pand(v12, v7)));
  v17 = *(__m64 *)((char *)a5 + (_DWORD)v8);
  v18 = _m_paddw(
          _mm_cvtsi32_si64(0),
          _m_paddw(
            v16,
            _m_psadbw(
              *(__m64 *)a2,
              _m_psubb(
                _m_pavgb(*(__m64 *)a3, (__m64)a4->m64_u64),
                _m_pand(_m_pxor(*(__m64 *)a3, (__m64)a4->m64_u64), v7)))));
  v19 = *(__m64 *)((char *)a5 + (_DWORD)v15);
  v20 = _mm_cvtsi64_si32(v18);
  v21 = v14;
  v22 = (__m64 *)((char *)v8 + 2 * (_DWORD)a5);
  v23 = _m_pxor(v14, (__m64)v9->m64_u64);
  v24 = _m_pavgb(v21, (__m64)v9->m64_u64);
  v25 = (__m64 *)((char *)v9 + 2 * (_DWORD)a5);
  v26 = v17;
  v27 = _m_pavgb(v17, v13);
  v28 = _m_pxor(v26, v13);
  v29 = *(__m64 *)((char *)a5 + (_DWORD)v25);
  v30 = _m_psubb(v24, _m_pand(v23, v7));
  v31 = (__m64)v22->m64_u64;
  v32 = _m_psadbw((__m64)v15->m64_u64, v30);
  v33 = (__m64 *)((char *)v15 + 2 * (_DWORD)a5);
  v34 = _m_psadbw(v19, _m_psubb(v27, _m_pand(v28, v7)));
  v35 = *(__m64 *)((char *)a5 + (_DWORD)v22);
  v36 = v31;
  v37 = (__m64 *)((char *)v22 + 2 * (_DWORD)a5);
  v38 = _m_pxor(v31, (__m64)v25->m64_u64);
  v39 = _m_pavgb(v36, (__m64)v25->m64_u64);
  v40 = (__m64 *)((char *)v25 + 2 * (_DWORD)a5);
  return _mm_cvtsi64_si32(_m_paddw(_mm_cvtsi32_si64(_mm_cvtsi64_si32(_m_paddw(_mm_cvtsi32_si64(_mm_cvtsi64_si32(_m_paddw(_mm_cvtsi32_si64(v20), _m_paddw(v34, v32)))), _m_paddw(_m_psadbw(*(__m64 *)((char *)a5 + (_DWORD)v33), _m_psubb(_m_pavgb(v35, v29), _m_pand(_m_pxor(v35, v29), v7))), _m_psadbw((__m64)v33->m64_u64, _m_psubb(v39, _m_pand(v38, v7))))))), _m_paddw(_m_psadbw(*(__m64 *)((char *)a5 + (_DWORD)v33 + 2 * (_DWORD)a5), _m_psubb(_m_pavgb(*(__m64 *)((char *)a5 + (_DWORD)v37), *(__m64 *)((char *)a5 + (_DWORD)v40)), _m_pand(_m_pxor(*(__m64 *)((char *)a5 + (_DWORD)v37), *(__m64 *)((char *)a5 + (_DWORD)v40)), v7))), _m_psadbw(*(__m64 *)((char *)v33 + 2 * (_DWORD)a5), _m_psubb(_m_pavgb((__m64)v37->m64_u64, (__m64)v40->m64_u64), _m_pand(_m_pxor((__m64)v37->m64_u64, (__m64)v40->m64_u64), v7))))));
}
