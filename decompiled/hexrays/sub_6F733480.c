signed int __usercall sub_6F733480@<eax>(int a1@<eax>, __int16 a2@<dx>, _DWORD *a3@<ecx>, _DWORD *a4)
{
  _DWORD *v4; // ebx@1
  signed int v5; // ecx@1
  signed int v6; // esi@4
  int v7; // ebp@4
  __int64 v8; // kr00_8@5
  __int64 v9; // rax@5
  __int64 v10; // rax@6
  __int64 v11; // ST00_8@6
  int v12; // edx@7
  int v13; // ebx@7
  int v14; // ecx@7
  unsigned __int64 v15; // rax@7
  int v17; // [sp+Ch] [bp-30h]@4
  int v18; // [sp+10h] [bp-2Ch]@4
  int v19; // [sp+20h] [bp-1Ch]@5

  v4 = a3;
  v5 = dword_6FBB5540;
  if ( dword_6FBB5540 )
  {
    v5 = 0;
    if ( (unsigned __int16)(a1 + 2048) <= 0xFFFu && (unsigned __int16)(a2 + 2048) <= 0xFFFu )
    {
      a1 = (signed __int16)a1;
      v6 = a2 + 2048;
      v17 = a2;
      v7 = dword_6FF41420[(((signed __int16)a1 + 2048) >> 3) + (v6 >> 3 << 9)];
      v18 = (((signed __int16)a1 + 2048) >> 3) + (v6 >> 3 << 9);
      if ( v7 )
      {
        v19 = 16 * ((a1 & 7) + 8 * (a2 & 7));
        v8 = *(_QWORD *)(v19 + dword_6FF41420[(((signed __int16)a1 + 2048) >> 3) + (v6 >> 3 << 9)]) - (a1 << 16);
        v9 = v8 ^ (SHIDWORD(v8) >> 31);
        HIDWORD(v9) = (SHIDWORD(v8) >> 31) ^ HIDWORD(v8);
        if ( (signed __int64)(v9 - __PAIR__(SHIDWORD(v8) >> 31, SHIDWORD(v8) >> 31)) <= 0xFFFF )
        {
          v10 = *(_QWORD *)(v19 + v7 + 8) - (v17 << 16);
          LODWORD(v11) = SHIDWORD(v10) >> 31;
          HIDWORD(v11) = SHIDWORD(v10) >> 31;
          if ( __PAIR__((SHIDWORD(v10) >> 31) ^ HIDWORD(v10), (unsigned int)v10 ^ (SHIDWORD(v10) >> 31)) - v11 <= 0xFFFF )
          {
            *v4 = (signed int)((double)(*(_QWORD *)(v19 + v7) * (signed __int64)dword_6FBB52F4) * 0.000015258789);
            v12 = dword_6FF41420[v18];
            v13 = *(_DWORD *)(v12 + v19 + 8) * (dword_6FBB52F8 >> 31);
            v14 = dword_6FBB52F8 * *(_DWORD *)(v12 + v19 + 12);
            v15 = *(_DWORD *)(v12 + v19 + 8) * (unsigned __int64)(unsigned int)dword_6FBB52F8;
            HIDWORD(v15) += v13 + v14;
            v5 = 1;
            *a4 = (signed int)(0.000015258789 * (double)(signed __int64)v15);
          }
        }
      }
    }
  }
  return v5;
}
