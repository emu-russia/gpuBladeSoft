int __cdecl sub_6F80D860(int a1)
{
  signed __int64 v1; // rax@4
  unsigned int v2; // ebp@5
  signed int v3; // esi@5
  int v4; // ecx@5
  unsigned __int64 v5; // rax@5
  signed __int64 v6; // rcx@5
  int v7; // ebp@5
  unsigned __int64 v8; // rax@5
  signed int v9; // esi@5
  signed __int64 v10; // rax@5
  signed int v11; // ebp@7
  int v12; // edx@8
  int v13; // esi@9
  signed int v14; // ebx@10
  int v15; // ebx@12
  int v16; // esi@17
  unsigned int v17; // eax@17
  int v18; // ecx@17
  __int64 v19; // rax@17
  int v20; // ebp@21
  bool v21; // zf@21
  int v22; // ebx@30
  int v23; // ebp@31
  int v24; // ecx@31
  int v25; // esi@32
  int v26; // ecx@32
  int v27; // esi@32
  signed int v28; // ebp@32
  int v29; // ecx@32
  int v30; // ebp@33
  int v31; // ecx@35
  int v32; // ebp@35
  size_t v33; // esi@38
  signed int v35; // [sp+18h] [bp-34h]@4
  signed int v36; // [sp+18h] [bp-34h]@35
  signed __int64 v37; // [sp+20h] [bp-2Ch]@4
  void *v38; // [sp+20h] [bp-2Ch]@38
  int v39; // [sp+2Ch] [bp-20h]@38

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 780) < 0 )
    {
      LODWORD(v10) = sub_6F80C080(a1);
LABEL_6:
      if ( *(_DWORD *)(a1 + 175112) != 2 )
        return v10;
      goto LABEL_7;
    }
    v16 = *(_DWORD *)(a1 + 52);
    v17 = *(_DWORD *)(a1 + 32);
    v18 = v17 * (*(_DWORD *)(a1 + 52) >> 31);
    v19 = (unsigned int)v16 * (unsigned __int64)v17;
    HIDWORD(v19) += v18;
    v1 = sub_6F8A13E0(v16, v19, *(_DWORD *)(a1 + 28));
    v35 = v1;
    if ( SHIDWORD(v1) >= 0x4000 && (SHIDWORD(v1) > 0x4000 || (_DWORD)v1) )
    {
      v35 = 0;
      v1 = 0x400000000000i64;
      *(_DWORD *)(a1 + 174904) = 0;
      *(_DWORD *)(a1 + 174908) = 0x4000;
      v37 = 0x100000000000i64;
    }
    else if ( SHIDWORD(v1) >= 0 && (SHIDWORD(v1) > 0 || (unsigned int)v1 > 0x1F) )
    {
      *(_QWORD *)(a1 + 174904) = v1;
      v37 = (v1 + 2) >> 2;
    }
    else
    {
      v35 = 32;
      *(_DWORD *)(a1 + 174904) = 32;
      *(_DWORD *)(a1 + 174908) = 0;
      v37 = 8i64;
      v1 = 32i64;
    }
    v2 = *(_DWORD *)(a1 + 51592);
    v3 = *(_DWORD *)(a1 + 174952) - (*(_DWORD *)(a1 + 174952) <= 11 ? *(_DWORD *)(a1 + 174952) - 12 : 0);
    *(_DWORD *)(a1 + 174952) = v3;
    v4 = v3 * HIDWORD(v1) + v1 * (v3 >> 31);
    v5 = (unsigned int)v3 * (unsigned __int64)(unsigned int)v35;
    HIDWORD(v5) += v4;
    *(_QWORD *)(a1 + 174928) = v5;
    v6 = (signed __int64)(v5 + 1) >> 1;
    LODWORD(v5) = v2 + (v3 < v2 ? v3 - v2 : 0);
    v7 = v5 * HIDWORD(v37);
    v8 = (unsigned int)v37 * (unsigned __int64)(unsigned int)v5;
    HIDWORD(v8) += v7;
    *(_QWORD *)(a1 + 174920) = v6 + v8;
    HIDWORD(v10) = *(_DWORD *)(a1 + 175068);
    v9 = (v3 >> 1) - (v3 >> 1 <= 9 ? (v3 >> 1) - 10 : 0);
    LODWORD(v10) = *(_DWORD *)(a1 + 175064);
    *(_DWORD *)(a1 + 175072) = v9;
    LODWORD(v10) = HIDWORD(v10) + ((signed int)v10 < SHIDWORD(v10) ? v10 - HIDWORD(v10) : 0);
    if ( v9 >= (signed int)v10 )
      goto LABEL_6;
    v20 = *(_DWORD *)(a1 + 175056);
    LODWORD(v10) = sub_6F80BEB0(a1 + 175032, v9);
    v21 = *(_DWORD *)(a1 + 175112) == 2;
    *(_DWORD *)(a1 + 175048) = v20;
    *(_DWORD *)(a1 + 175052) = v20;
    *(_DWORD *)(a1 + 175056) = v20;
    *(_DWORD *)(a1 + 175060) = v20;
    *(_DWORD *)(a1 + 175068) = v9;
    if ( !v21 )
      return v10;
LABEL_7:
    LODWORD(v10) = *(_DWORD *)(a1 + 175192);
    v11 = *(_DWORD *)(a1 + 174952);
    if ( (_DWORD)v10 )
    {
      v13 = *(_DWORD *)(a1 + 175200);
      if ( v11 <= v13 )
        return v10;
      v14 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 175208);
      if ( v12 )
      {
        if ( v11 >= (unsigned int)(*(_DWORD *)(a1 + 175216) + *(_DWORD *)(a1 + 175212) + v12) )
          return v10;
        v13 = *(_DWORD *)(a1 + 175200);
        if ( v11 <= v13 )
        {
LABEL_30:
          v22 = *(_DWORD *)(a1 + 174952);
LABEL_31:
          v23 = *(_DWORD *)(a1 + 51604);
          v24 = *(_DWORD *)(a1 + 776);
          LODWORD(v10) = *(_DWORD *)(a1 + 175164);
          *(_DWORD *)(a1 + 175264) = 0;
          *(_DWORD *)(a1 + 175260) = 0;
          *(_DWORD *)(a1 + 175256) = 0;
          HIDWORD(v10) = v23 + v24 + 1;
          *(_DWORD *)(a1 + 175240) = 0;
          *(_DWORD *)(a1 + 175244) = 0;
          *(_DWORD *)(a1 + 175232) = 0;
          *(_DWORD *)(a1 + 175236) = 0;
          *(_DWORD *)(a1 + 175248) = HIDWORD(v10);
          *(_DWORD *)(a1 + 175252) = HIDWORD(v10);
          if ( (_DWORD)v10 )
          {
            v25 = *(_DWORD *)(a1 + 175192);
            LODWORD(v10) = -1;
            v26 = *(_DWORD *)(a1 + 175188);
            *(_DWORD *)v25 = *(_DWORD *)(a1 + 175184);
            *(_DWORD *)(v25 + 4) = v26;
            BYTE4(v10) = *(_BYTE *)(a1 + 175191);
            ++*(_DWORD *)(a1 + 175196);
            v27 = (unsigned __int8)(BYTE4(v10) >> 7);
            HIDWORD(v10) = 0x7FFF;
            ++*(_DWORD *)(a1 + 4 * v27 + 175256);
            v28 = *(_DWORD *)(a1 + 175184);
            v29 = *(_DWORD *)(a1 + 175188) & 0x7FFFFFFF;
            *(_DWORD *)(a1 + 175264) += v29;
            if ( v28 <= 385875967 )
            {
              v10 = sub_6F809680(__PAIR__((__PAIR__((unsigned int)(2 * v28), 0) + 3458764513820540928i64) >> 32, 0));
              if ( SHIDWORD(v10) > 0x7FFF )
                v10 = 0x7FFFFFFFFFFFi64;
              v29 = *(_DWORD *)(a1 + 175188) & 0x7FFFFFFF;
            }
            *(_QWORD *)(a1 + 8 * v27 + 175232) += v10;
            v30 = v29 + *(_DWORD *)(a1 + 175252) + 1;
            *(_DWORD *)(a1 + 175252) = v30;
            if ( v30 - *(_DWORD *)(a1 + 175248) < v22 )
              *(_DWORD *)(a1 + 175164) = 0;
          }
          return v10;
        }
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 175200);
        if ( v11 <= v13 )
          goto LABEL_30;
      }
      v14 = 1;
    }
    LODWORD(v10) = realloc(*(void **)(a1 + 175192), 8 * v11);
    if ( (_DWORD)v10 )
      break;
    v15 = *(_DWORD *)(a1 + 175208);
    if ( !v15 )
      return v10;
    if ( !*(_DWORD *)(a1 + 175192) )
      v13 = *(_DWORD *)(a1 + 175216) + *(_DWORD *)(a1 + 175212) + v15;
    *(_DWORD *)(a1 + 174952) = v13;
  }
  v31 = *(_DWORD *)(a1 + 175204) + *(_DWORD *)(a1 + 175196);
  v10 = __PAIR__(v10, v11);
  v36 = v14;
  v32 = v13;
  v22 = v10;
  *(_DWORD *)(a1 + 175192) = HIDWORD(v10);
  *(_DWORD *)(a1 + 175200) = v10;
  if ( v31 > v13 )
  {
    v39 = v31;
    v38 = (void *)HIDWORD(v10);
    v33 = 8 * (v31 - v13 + ((signed int)v10 - v13 < v31 - v13 ? v10 - v13 + v13 - v31 : 0));
    LODWORD(v10) = memcpy((void *)(HIDWORD(v10) + 8 * v32), (const void *)HIDWORD(v10), v33);
    if ( v39 > v22 )
      LODWORD(v10) = memmove(v38, (char *)v38 + v33, v39 - v22);
  }
  if ( v36 )
    goto LABEL_31;
  return v10;
}
