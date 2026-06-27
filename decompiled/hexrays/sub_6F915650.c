int __thiscall sub_6F915650(int this, int a2)
{
  int v2; // esi@1
  int v3; // eax@1
  int v4; // edx@1
  int v5; // eax@1
  int v6; // edx@1
  int v7; // eax@1
  int v8; // edx@1
  int v9; // eax@1
  int v10; // edx@1
  int v11; // eax@1
  int v12; // edx@1
  int v13; // eax@1
  volatile signed __int32 **v14; // ST1C_4@1
  int v15; // eax@1
  char v16; // dl@1
  int v17; // edx@1
  int v18; // eax@1
  int v19; // edx@1
  int v20; // eax@1
  int v21; // edx@1
  int v22; // eax@1
  int v23; // edx@1
  int v24; // eax@1
  int v25; // edx@1
  int v26; // eax@1
  int v27; // edx@1
  int v28; // eax@1
  int v29; // edx@1
  int v30; // eax@1
  int v31; // edx@1
  int v32; // eax@1
  int v33; // edx@1
  int v34; // eax@1
  int v35; // edx@1
  int v36; // eax@1
  int v37; // edx@1
  int v38; // eax@1
  int v39; // eax@1
  int result; // eax@1
  char v41; // [sp+2Ch] [bp-20h]@1

  v2 = this;
  v3 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = v3;
  v5 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 8) = v4;
  v6 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v5;
  v7 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 12) = v6;
  v8 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v7;
  v9 = *(_DWORD *)(this + 16);
  *(_DWORD *)(this + 16) = v8;
  v10 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 16) = v9;
  v11 = *(_DWORD *)(this + 20);
  *(_DWORD *)(this + 20) = v10;
  v12 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 20) = v11;
  v13 = *(_DWORD *)(this + 24);
  *(_DWORD *)(this + 24) = v12;
  *(_DWORD *)(a2 + 24) = v13;
  v14 = (volatile signed __int32 **)(this + 28);
  sub_6F938240(&v41, (volatile signed __int32 **)(this + 28));
  sub_6F9383B0(v14, (volatile signed __int32 **)(a2 + 28));
  sub_6F9383B0((volatile signed __int32 **)(a2 + 28), (volatile signed __int32 **)&v41);
  sub_6F938380((volatile signed __int32 **)&v41);
  v15 = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a2 + 36);
  v16 = *(_BYTE *)(a2 + 40);
  *(_DWORD *)(a2 + 36) = v15;
  LOBYTE(v15) = *(_BYTE *)(v2 + 40);
  *(_BYTE *)(v2 + 40) = v16;
  v17 = *(_DWORD *)(a2 + 44);
  *(_BYTE *)(a2 + 40) = v15;
  v18 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 44) = v17;
  v19 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 44) = v18;
  v20 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 48) = v19;
  v21 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 48) = v20;
  v22 = *(_DWORD *)(v2 + 52);
  *(_DWORD *)(v2 + 52) = v21;
  v23 = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a2 + 52) = v22;
  v24 = *(_DWORD *)(v2 + 56);
  *(_DWORD *)(v2 + 56) = v23;
  v25 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 56) = v24;
  v26 = *(_DWORD *)(v2 + 60);
  *(_DWORD *)(v2 + 60) = v25;
  v27 = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 60) = v26;
  v28 = *(_DWORD *)(v2 + 64);
  *(_DWORD *)(v2 + 64) = v27;
  *(_DWORD *)(a2 + 64) = v28;
  LOBYTE(v28) = *(_BYTE *)(v2 + 68);
  *(_BYTE *)(v2 + 68) = *(_BYTE *)(a2 + 68);
  v29 = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a2 + 68) = v28;
  v30 = *(_DWORD *)(v2 + 88);
  *(_DWORD *)(v2 + 88) = v29;
  v31 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a2 + 88) = v30;
  v32 = *(_DWORD *)(v2 + 92);
  *(_DWORD *)(v2 + 92) = v31;
  v33 = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 92) = v32;
  v34 = *(_DWORD *)(v2 + 96);
  *(_DWORD *)(v2 + 96) = v33;
  v35 = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(a2 + 96) = v34;
  v36 = *(_DWORD *)(v2 + 100);
  *(_DWORD *)(v2 + 100) = v35;
  LOBYTE(v35) = *(_BYTE *)(a2 + 69);
  *(_DWORD *)(a2 + 100) = v36;
  LOBYTE(v36) = *(_BYTE *)(v2 + 69);
  *(_BYTE *)(v2 + 69) = v35;
  LOBYTE(v35) = *(_BYTE *)(a2 + 70);
  *(_BYTE *)(a2 + 69) = v36;
  LOBYTE(v36) = *(_BYTE *)(v2 + 70);
  *(_BYTE *)(v2 + 70) = v35;
  v37 = *(_DWORD *)(a2 + 72);
  *(_BYTE *)(a2 + 70) = v36;
  v38 = *(_DWORD *)(v2 + 72);
  *(_DWORD *)(v2 + 72) = v37;
  *(_DWORD *)(a2 + 72) = v38;
  v39 = *(_DWORD *)(v2 + 76);
  *(_DWORD *)(v2 + 76) = *(_DWORD *)(a2 + 76);
  LOBYTE(v37) = *(_BYTE *)(a2 + 80);
  *(_DWORD *)(a2 + 76) = v39;
  result = *(_BYTE *)(v2 + 80);
  *(_BYTE *)(v2 + 80) = v37;
  *(_BYTE *)(a2 + 80) = result;
  return result;
}
