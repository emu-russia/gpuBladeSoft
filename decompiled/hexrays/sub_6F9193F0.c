char *__thiscall sub_6F9193F0(_DWORD *this, int a2)
{
  char *v2; // esi@1
  int v3; // eax@1
  char v4; // dl@1
  int v5; // eax@1
  int v6; // eax@1
  int v7; // eax@1
  int v8; // eax@1
  int v9; // eax@1
  int v10; // eax@1
  int v11; // eax@1
  int v12; // eax@1
  int v13; // eax@1
  int v14; // eax@1
  int v15; // eax@1
  char *result; // eax@1

  v2 = (char *)this;
  sub_6F917A70(this);
  sub_6F92E120(v2, a2);
  v3 = *((_DWORD *)v2 + 9);
  *((_DWORD *)v2 + 9) = *(_DWORD *)(a2 + 36);
  v4 = *(_BYTE *)(a2 + 40);
  *(_DWORD *)(a2 + 36) = v3;
  LOBYTE(v3) = v2[40];
  v2[40] = v4;
  *(_BYTE *)(a2 + 40) = v3;
  v5 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 44) = 0;
  *((_DWORD *)v2 + 11) = v5;
  *((_DWORD *)v2 + 12) = *(_DWORD *)(a2 + 48);
  *((_DWORD *)v2 + 13) = *(_DWORD *)(a2 + 52);
  *((_DWORD *)v2 + 14) = *(_DWORD *)(a2 + 56);
  v6 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 60) = 0;
  *((_DWORD *)v2 + 15) = v6;
  v7 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 64) = 1;
  *((_DWORD *)v2 + 16) = v7;
  LOBYTE(v7) = *(_BYTE *)(a2 + 68);
  *(_BYTE *)(a2 + 68) = 0;
  v2[68] = v7;
  v8 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a2 + 92) = 0;
  *((_DWORD *)v2 + 23) = v8;
  v9 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 96) = 0;
  *((_DWORD *)v2 + 24) = v9;
  v10 = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a2 + 100) = 0;
  *((_DWORD *)v2 + 25) = v10;
  v11 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 104) = 0;
  *((_DWORD *)v2 + 26) = v11;
  LOBYTE(v11) = *(_BYTE *)(a2 + 69);
  *(_BYTE *)(a2 + 69) = 0;
  v2[69] = v11;
  LOBYTE(v11) = *(_BYTE *)(a2 + 70);
  *(_BYTE *)(a2 + 70) = 0;
  v2[70] = v11;
  v12 = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a2 + 76) = 0;
  *((_DWORD *)v2 + 19) = v12;
  v13 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 80) = 0;
  *((_DWORD *)v2 + 20) = v13;
  LOBYTE(v13) = *(_BYTE *)(a2 + 84);
  *(_BYTE *)(a2 + 84) = 0;
  v2[84] = v13;
  v14 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 4) = v14;
  *(_DWORD *)(a2 + 8) = v14;
  *(_DWORD *)(a2 + 12) = v14;
  v15 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 52) = v15;
  *(_DWORD *)(a2 + 56) = v15;
  result = v2;
  *(_DWORD *)(a2 + 24) = 0;
  return result;
}
