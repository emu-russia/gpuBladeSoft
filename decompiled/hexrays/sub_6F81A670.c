unsigned int __usercall sub_6F81A670@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v5; // ebp@1
  int v6; // edi@1
  int v7; // ebx@1
  int v8; // esi@1
  int v9; // ST2C_4@1
  int v10; // ecx@1
  int v11; // ecx@1
  int v12; // edx@1
  int v13; // eax@1
  int v14; // ebp@1
  int v15; // edx@2
  int v17; // ST14_4@4
  int v18; // ST10_4@4

  v5 = 4 * a3;
  v6 = a3;
  v7 = a2 + 4 * a3;
  v8 = a1;
  v9 = a2;
  *(_DWORD *)(v7 + 1252) -= 4 * *(_DWORD *)(v7 + 1276);
  sub_6F818640(a1);
  v10 = *(_DWORD *)(v7 + 1312);
  *(_DWORD *)(v7 + 1276) = 0;
  sub_6F8132E0(v5, v8, v6, *(_DWORD *)(v7 + 1300), v10);
  sub_6F813900(v8, v6, *(_DWORD *)(v7 + 1240), *(_DWORD *)(v7 + 1264), *(_DWORD *)(v7 + 1348), *(_DWORD *)(v7 + 1360));
  v11 = *(_WORD *)(v8 + (v6 << 7) + 52554);
  *(_DWORD *)(v7 + 1348) = *(_DWORD *)(v8 + (v6 << 8) + 51788);
  v12 = *(_DWORD *)(v7 + 1264);
  *(_DWORD *)(v7 + 1360) = v11;
  *(_DWORD *)(v8 + v5 + 256) += v12;
  *(_DWORD *)(v7 + 1264) = 0;
  *(_DWORD *)(v7 + 1240) += 4 * v12;
  v13 = *(_DWORD *)(v9 + 1372);
  v14 = *(_DWORD *)(v8 + 280);
  if ( v13 )
  {
    v17 = *(_DWORD *)(v7 + 1312) - a5;
    v18 = *(_DWORD *)(v7 + 1300) - a4;
    sub_6F818980(v8);
    v13 = 2 * a5;
    v15 = 2 * a4;
  }
  else
  {
    v15 = 0;
    a5 = 0;
    a4 = 0;
  }
  return sub_6F817EC0(v8, v14, v6, 8 * (*(_DWORD *)(v7 + 1300) - a4) - v15, 8 * (*(_DWORD *)(v7 + 1312) - a5) - v13);
}
