int __thiscall sub_6F916AC0(_DWORD *this, int a2)
{
  _DWORD *v2; // esi@1
  int v3; // eax@1
  int v4; // eax@1
  int v5; // eax@1
  int v6; // eax@1
  int v7; // eax@1
  int v8; // eax@1
  int v9; // eax@1
  int v10; // eax@1
  int v11; // eax@1
  int v12; // eax@1
  int v13; // eax@1
  int result; // eax@1

  v2 = this;
  sub_6F92D660((char *)this, a2);
  v2[8] = 0;
  v3 = *(_DWORD *)(a2 + 36);
  *v2 = off_6FBB0398;
  v2[9] = v3;
  *((_BYTE *)v2 + 40) = *(_BYTE *)(a2 + 40);
  v4 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 36) = 0;
  *(_BYTE *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  v2[11] = v4;
  v2[12] = *(_DWORD *)(a2 + 48);
  v2[13] = *(_DWORD *)(a2 + 52);
  v2[14] = *(_DWORD *)(a2 + 56);
  v5 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 60) = 0;
  v2[15] = v5;
  v6 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 64) = 1;
  v2[16] = v6;
  LOBYTE(v6) = *(_BYTE *)(a2 + 68);
  *(_BYTE *)(a2 + 68) = 0;
  *((_BYTE *)v2 + 68) = v6;
  LOBYTE(v6) = *(_BYTE *)(a2 + 69);
  *(_BYTE *)(a2 + 69) = 0;
  *((_BYTE *)v2 + 69) = v6;
  LOBYTE(v6) = *(_BYTE *)(a2 + 70);
  *(_BYTE *)(a2 + 70) = 0;
  *((_BYTE *)v2 + 70) = v6;
  *((_BYTE *)v2 + 71) = *(_BYTE *)(a2 + 71);
  v7 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a2 + 72) = 0;
  v2[18] = v7;
  v8 = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a2 + 76) = 0;
  v2[19] = v8;
  LOBYTE(v8) = *(_BYTE *)(a2 + 80);
  *(_BYTE *)(a2 + 80) = 0;
  *((_BYTE *)v2 + 80) = v8;
  v2[21] = *(_DWORD *)(a2 + 84);
  v9 = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 88) = 0;
  v2[22] = v9;
  v10 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a2 + 92) = 0;
  v2[23] = v10;
  v11 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 96) = 0;
  v2[24] = v11;
  v12 = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a2 + 100) = 0;
  v2[25] = v12;
  v13 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 4) = v13;
  *(_DWORD *)(a2 + 8) = v13;
  *(_DWORD *)(a2 + 12) = v13;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  result = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 52) = result;
  *(_DWORD *)(a2 + 56) = result;
  return result;
}
