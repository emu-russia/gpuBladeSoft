__m64 *__cdecl sub_6F818D80(__m64 *a1, __m64 *a2, __m64 *a3, int a4, int a5)
{
  __m64 v5; // mm4@1
  __m64 v6; // mm5@1
  __m64 *v7; // ecx@1
  __m64 *v8; // ebx@1
  __m64 *v9; // eax@1
  __m64 v10; // mm4@1
  __m64 v11; // mm0@1
  __m64 v12; // mm5@1
  __m64 v13; // mm1@1
  __m64 v14; // mm2@1
  __m64 v15; // mm3@1
  __m64 *v16; // ecx@1
  __m64 *v17; // ebx@1
  __m64 *v18; // eax@1
  __m64 v19; // mm4@1
  __m64 v20; // mm0@1
  __m64 v21; // mm5@1
  __m64 v22; // mm1@1
  __m64 v23; // mm2@1
  __m64 v24; // mm3@1
  __m64 *v25; // ecx@1
  __m64 *v26; // ebx@1
  __m64 *v27; // eax@1
  __m64 v28; // mm4@1
  __m64 v29; // mm5@1

  v5 = *(__m64 *)((char *)a2 + a4);
  v6 = *(__m64 *)((char *)a3 + a4);
  v7 = (__m64 *)((char *)a2 + 2 * a4);
  v8 = (__m64 *)((char *)a3 + 2 * a4);
  a1->m64_u64 = (unsigned __int64)_m_packuswb(
                                    _m_paddsw(
                                      _m_psraw(
                                        _m_paddsw(
                                          _m_punpcklbw((__m64)a2->m64_u64, 0i64),
                                          _m_punpcklbw((__m64)a3->m64_u64, 0i64)),
                                        1u),
                                      *(__m64 *)a5),
                                    _m_paddsw(
                                      _m_psraw(
                                        _m_paddsw(
                                          _m_punpckhbw((__m64)a2->m64_u64, 0i64),
                                          _m_punpckhbw((__m64)a3->m64_u64, 0i64)),
                                        1u),
                                      *(__m64 *)(a5 + 8)));
  *(__m64 *)((char *)a1 + a4) = _m_packuswb(
                                  _m_paddsw(
                                    _m_psraw(_m_paddsw(_m_punpcklbw(v6, 0i64), _m_punpcklbw(v5, 0i64)), 1u),
                                    *(__m64 *)(a5 + 16)),
                                  _m_paddsw(
                                    _m_psraw(_m_paddsw(_m_punpckhbw(v6, 0i64), _m_punpckhbw(v5, 0i64)), 1u),
                                    *(__m64 *)(a5 + 24)));
  v9 = (__m64 *)((char *)a1 + 2 * a4);
  v10 = *(__m64 *)((char *)v7 + a4);
  v11 = _m_punpcklbw((__m64)v7->m64_u64, 0i64);
  v12 = *(__m64 *)((char *)v8 + a4);
  v13 = _m_punpckhbw((__m64)v7->m64_u64, 0i64);
  v14 = _m_punpcklbw((__m64)v8->m64_u64, 0i64);
  v15 = _m_punpckhbw((__m64)v8->m64_u64, 0i64);
  v16 = (__m64 *)((char *)v7 + 2 * a4);
  v17 = (__m64 *)((char *)v8 + 2 * a4);
  v9->m64_u64 = (unsigned __int64)_m_packuswb(
                                    _m_paddsw(_m_psraw(_m_paddsw(v11, v14), 1u), *(__m64 *)(a5 + 32)),
                                    _m_paddsw(_m_psraw(_m_paddsw(v13, v15), 1u), *(__m64 *)(a5 + 40)));
  *(__m64 *)((char *)v9 + a4) = _m_packuswb(
                                  _m_paddsw(
                                    _m_psraw(_m_paddsw(_m_punpcklbw(v12, 0i64), _m_punpcklbw(v10, 0i64)), 1u),
                                    *(__m64 *)(a5 + 48)),
                                  _m_paddsw(
                                    _m_psraw(_m_paddsw(_m_punpckhbw(v12, 0i64), _m_punpckhbw(v10, 0i64)), 1u),
                                    *(__m64 *)(a5 + 56)));
  v18 = (__m64 *)((char *)v9 + 2 * a4);
  v19 = *(__m64 *)((char *)v16 + a4);
  v20 = _m_punpcklbw((__m64)v16->m64_u64, 0i64);
  v21 = *(__m64 *)((char *)v17 + a4);
  v22 = _m_punpckhbw((__m64)v16->m64_u64, 0i64);
  v23 = _m_punpcklbw((__m64)v17->m64_u64, 0i64);
  v24 = _m_punpckhbw((__m64)v17->m64_u64, 0i64);
  v25 = (__m64 *)((char *)v16 + 2 * a4);
  v26 = (__m64 *)((char *)v17 + 2 * a4);
  v18->m64_u64 = (unsigned __int64)_m_packuswb(
                                     _m_paddsw(_m_psraw(_m_paddsw(v20, v23), 1u), *(__m64 *)(a5 + 64)),
                                     _m_paddsw(_m_psraw(_m_paddsw(v22, v24), 1u), *(__m64 *)(a5 + 72)));
  *(__m64 *)((char *)v18 + a4) = _m_packuswb(
                                   _m_paddsw(
                                     _m_psraw(_m_paddsw(_m_punpcklbw(v21, 0i64), _m_punpcklbw(v19, 0i64)), 1u),
                                     *(__m64 *)(a5 + 80)),
                                   _m_paddsw(
                                     _m_psraw(_m_paddsw(_m_punpckhbw(v21, 0i64), _m_punpckhbw(v19, 0i64)), 1u),
                                     *(__m64 *)(a5 + 88)));
  v27 = (__m64 *)((char *)v18 + 2 * a4);
  v28 = *(__m64 *)((char *)v25 + a4);
  v29 = *(__m64 *)((char *)v26 + a4);
  v27->m64_u64 = (unsigned __int64)_m_packuswb(
                                     _m_paddsw(
                                       _m_psraw(
                                         _m_paddsw(
                                           _m_punpcklbw((__m64)v25->m64_u64, 0i64),
                                           _m_punpcklbw((__m64)v26->m64_u64, 0i64)),
                                         1u),
                                       *(__m64 *)(a5 + 96)),
                                     _m_paddsw(
                                       _m_psraw(
                                         _m_paddsw(
                                           _m_punpckhbw((__m64)v25->m64_u64, 0i64),
                                           _m_punpckhbw((__m64)v26->m64_u64, 0i64)),
                                         1u),
                                       *(__m64 *)(a5 + 104)));
  *(__m64 *)((char *)v27 + a4) = _m_packuswb(
                                   _m_paddsw(
                                     _m_psraw(_m_paddsw(_m_punpcklbw(v29, 0i64), _m_punpcklbw(v28, 0i64)), 1u),
                                     *(__m64 *)(a5 + 112)),
                                   _m_paddsw(
                                     _m_psraw(_m_paddsw(_m_punpckhbw(v29, 0i64), _m_punpckhbw(v28, 0i64)), 1u),
                                     *(__m64 *)(a5 + 120)));
  return (__m64 *)((char *)v27 + 2 * a4);
}
