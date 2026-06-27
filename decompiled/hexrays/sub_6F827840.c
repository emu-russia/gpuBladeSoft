unsigned int __cdecl sub_6F827840(int a1, unsigned int a2)
{
  int v2; // edi@1
  int v3; // ecx@2
  int v4; // edx@2
  int v5; // eax@2
  int v6; // ebp@2
  int v7; // edx@2
  int v8; // ecx@2
  int v9; // ST0C_4@2
  int v10; // esi@2
  int v11; // ebx@2
  int v12; // ST10_4@2
  int v13; // edx@2
  int v14; // eax@2
  int v15; // ecx@2
  int v16; // ST08_4@2
  int v17; // eax@2
  int v18; // ebx@2
  int v19; // edx@2
  int v20; // ST14_4@2
  int v21; // ST08_4@2
  int v22; // ebp@2
  int v23; // esi@2
  int v24; // eax@2
  int v25; // ST0C_4@2
  int v26; // ebx@2
  unsigned int v28; // [sp+0h] [bp-2Ch]@1

  v28 = 0;
  v2 = a1;
  do
  {
    v3 = *(_WORD *)(v2 + 8);
    v4 = *(_WORD *)v2;
    v5 = *(_WORD *)(v2 + 10);
    v6 = v4 + v3;
    v7 = v4 - v3;
    v8 = *(_WORD *)(v2 + 4);
    v9 = v7;
    v10 = *(_WORD *)(v2 + 2) + v5;
    v11 = *(_WORD *)(v2 + 12);
    v12 = *(_WORD *)(v2 + 2) - v5;
    v13 = *(_WORD *)(v2 + 6);
    v14 = v8 + v11;
    v15 = v8 - v11;
    v16 = v14;
    v17 = *(_WORD *)(v2 + 14);
    v18 = v13 + v17;
    v19 = v13 - v17;
    v20 = v6 - v16;
    v21 = v6 + v16;
    v22 = v10 + v18;
    v23 = v10 - v18;
    v24 = v9 + v15;
    v25 = v9 - v15;
    v26 = v12 + v19;
    v28 += abs(v25 - (v12 - v19))
         + (((v26 + v24) >> 31) ^ (v26 + v24))
         - ((v26 + v24) >> 31)
         + (((v20 - v23) >> 31) ^ (v20 - v23))
         - ((v20 - v23) >> 31)
         + (((v20 + v23) >> 31) ^ (v20 + v23))
         - ((v20 + v23) >> 31)
         + (((v21 - v22) >> 31) ^ (v21 - v22))
         - ((v21 - v22) >> 31)
         + (((v21 + v22) >> 31) ^ (v21 + v22))
         - ((v21 + v22) >> 31)
         + abs(v24 - v26)
         + (((v12 - v19 + v25) >> 31) ^ (v12 - v19 + v25))
         - ((v12 - v19 + v25) >> 31);
    if ( v28 > a2 )
      break;
    v2 += 16;
  }
  while ( v2 != a1 + 128 );
  return v28;
}
