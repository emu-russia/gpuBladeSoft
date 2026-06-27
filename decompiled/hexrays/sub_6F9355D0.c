int __thiscall sub_6F9355D0(_DWORD *this, int a2)
{
  int v2; // eax@1
  int v3; // edx@1
  int v4; // edx@1
  int v5; // eax@1
  int v6; // eax@1
  int v7; // eax@1
  int v8; // eax@1
  int v9; // eax@1
  int v10; // eax@1
  int v11; // eax@1
  int v12; // eax@1
  int v13; // ecx@1
  int v14; // eax@1
  int v15; // ecx@1
  int v16; // eax@1
  int v17; // eax@1
  int v18; // edx@1
  int v19; // eax@1
  int v20; // eax@1
  int v21; // eax@1
  int v22; // eax@1
  int v23; // eax@1
  int v24; // eax@1
  int v25; // eax@1
  int v26; // eax@1
  int v27; // eax@1
  int v28; // eax@1
  int v29; // eax@1
  int v30; // eax@1
  int v32; // [sp+0h] [bp-78h]@1
  int v33; // [sp+1Ch] [bp-5Ch]@1
  int v34; // [sp+20h] [bp-58h]@1
  int v35; // [sp+24h] [bp-54h]@1
  int v36; // [sp+28h] [bp-50h]@1
  int v37; // [sp+2Ch] [bp-4Ch]@1
  int v38; // [sp+30h] [bp-48h]@1
  int v39; // [sp+34h] [bp-44h]@1
  _DWORD *v40; // [sp+38h] [bp-40h]@1
  char v41; // [sp+3Ch] [bp-3Ch]@1
  int v42; // [sp+40h] [bp-38h]@1
  int (__cdecl *v43)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-24h]@1
  int *v44; // [sp+58h] [bp-20h]@1
  char *v45; // [sp+5Ch] [bp-1Ch]@1
  int (*v46)(); // [sp+60h] [bp-18h]@1
  int *v47; // [sp+64h] [bp-14h]@1
  char v48; // [sp+70h] [bp-8h]@1

  v40 = this;
  v45 = &v48;
  v43 = sub_6F962A50;
  v44 = dword_6F96ADEC;
  v46 = sub_6F935B96;
  v47 = &v32;
  sub_6F8A1A60((int *)&v41);
  v2 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  dword_6FB49E24 = (int)off_6FBB0EEC;
  dword_6FB49E28 = 1;
  v39 = v3;
  v34 = v2;
  v4 = *(_DWORD *)(a2 + 8);
  dword_6FB49E2C = v2;
  v38 = v4;
  v42 = 8;
  sub_6F9570B0((int)&dword_6FB49E24, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E28, 1u);
  v37 = v40[1];
  v5 = sub_6F8C3BF0(&unk_6FB49FD8);
  *(_DWORD *)(v37 + 4 * v5) = &dword_6FB49E24;
  dword_6FB49EA0 = 1;
  dword_6FB49E9C = (int)off_6FBB0D80;
  v42 = 7;
  dword_6FB49EA4 = sub_6F937FA0();
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49EA0, 1u);
  v37 = v40[1];
  v6 = sub_6F8C3BF0(&unk_6FB49FB0);
  *(_DWORD *)(v37 + 4 * v6) = &dword_6FB49E9C;
  dword_6FB49E70 = 1;
  dword_6FB49E6C = (int)off_6FBB0198;
  dword_6FB49E74 = v39;
  v42 = 6;
  sub_6F90A7C0((int)&dword_6FB49E6C, 0, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E70, 1u);
  v37 = v40[1];
  v7 = sub_6F8C3BF0(&unk_6FB49DEC);
  *(_DWORD *)(v37 + 4 * v7) = &dword_6FB49E6C;
  dword_6FB49E7C = 1;
  dword_6FB49E78 = (int)off_6FBB01CC;
  dword_6FB49E80 = v38;
  v42 = 5;
  sub_6F90AE20((int)&dword_6FB49E78, 0, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E7C, 1u);
  v37 = v40[1];
  v8 = sub_6F8C3BF0(&unk_6FB49DF0);
  *(_DWORD *)(v37 + 4 * v8) = &dword_6FB49E78;
  dword_6FB49E50 = 1;
  dword_6FB49E4C = (int)off_6FBB0FF4;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E50, 1u);
  v37 = v40[1];
  v9 = sub_6F8C3BF0(&unk_6FB49FF0);
  *(_DWORD *)(v37 + 4 * v9) = &dword_6FB49E4C;
  dword_6FB49E60 = 1;
  dword_6FB49E5C = (int)off_6FBB1024;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E60, 1u);
  v37 = v40[1];
  v10 = sub_6F8C3BF0(&unk_6FB49FF8);
  *(_DWORD *)(v37 + 4 * v10) = &dword_6FB49E5C;
  dword_6FB49E40 = 1;
  dword_6FB49E3C = (int)off_6FBB0F34;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E40, 1u);
  v37 = v40[1];
  v11 = sub_6F8C3BF0(&unk_6FB49FE0);
  *(_DWORD *)(v37 + 4 * v11) = &dword_6FB49E3C;
  v42 = -1;
  sub_6F956A10(&unk_6FB49E04, 1);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E08, 1u);
  v37 = v40[1];
  v12 = sub_6F8C3BF0(&unk_6FB49FD0);
  *(_DWORD *)(v37 + 4 * v12) = &unk_6FB49E04;
  dword_6FB49E34 = 1;
  v13 = *(_DWORD *)(a2 + 16);
  dword_6FB49E30 = (int)off_6FBB0F10;
  v14 = *(_DWORD *)(a2 + 12);
  v37 = v13;
  v15 = *(_DWORD *)(a2 + 20);
  v33 = v14;
  v36 = v15;
  dword_6FB49E38 = v14;
  v42 = 4;
  sub_6F9576C0((int)&dword_6FB49E30, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E34, 1u);
  v35 = v40[1];
  v16 = sub_6F8C3BF0(&unk_6FB49FDC);
  *(_DWORD *)(v35 + 4 * v16) = &dword_6FB49E30;
  dword_6FB49EAC = 1;
  dword_6FB49EA8 = (int)off_6FBB0D9C;
  v42 = 3;
  dword_6FB49EB0 = sub_6F937FA0();
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49EAC, 1u);
  v35 = v40[1];
  v17 = sub_6F8C3BF0(&unk_6FB49FB4);
  v18 = v37;
  *(_DWORD *)(v35 + 4 * v17) = &dword_6FB49EA8;
  dword_6FB49E88 = 1;
  dword_6FB49E84 = (int)off_6FBB0200;
  dword_6FB49E8C = v18;
  v42 = 2;
  sub_6F90B480((int)&dword_6FB49E84, 0, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E88, 1u);
  v35 = v40[1];
  v19 = sub_6F8C3BF0(&unk_6FB49DF4);
  *(_DWORD *)(v35 + 4 * v19) = &dword_6FB49E84;
  dword_6FB49E94 = 1;
  dword_6FB49E90 = (int)off_6FBB0234;
  dword_6FB49E98 = v36;
  v42 = 1;
  sub_6F90BAF0((int)&dword_6FB49E90, 0, 0);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E94, 1u);
  v35 = v40[1];
  v20 = sub_6F8C3BF0(&unk_6FB49DF8);
  *(_DWORD *)(v35 + 4 * v20) = &dword_6FB49E90;
  dword_6FB49E58 = 1;
  dword_6FB49E54 = (int)off_6FBB100C;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E58, 1u);
  v35 = v40[1];
  v21 = sub_6F8C3BF0(&unk_6FB49FF4);
  *(_DWORD *)(v35 + 4 * v21) = &dword_6FB49E54;
  dword_6FB49E68 = 1;
  dword_6FB49E64 = (int)off_6FBB103C;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E68, 1u);
  v35 = v40[1];
  v22 = sub_6F8C3BF0(&unk_6FB49FFC);
  *(_DWORD *)(v35 + 4 * v22) = &dword_6FB49E64;
  dword_6FB49E48 = 1;
  dword_6FB49E44 = (int)off_6FBB0F5C;
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E48, 1u);
  v35 = v40[1];
  v23 = sub_6F8C3BF0(&unk_6FB49FE4);
  *(_DWORD *)(v35 + 4 * v23) = &dword_6FB49E44;
  v42 = -1;
  sub_6F956DB0(&unk_6FB49E14, 1);
  _InterlockedAdd((volatile signed __int32 *)&dword_6FB49E18, 1u);
  v35 = v40[1];
  v24 = sub_6F8C3BF0(&unk_6FB49FD4);
  *(_DWORD *)(v35 + 4 * v24) = &unk_6FB49E14;
  v35 = v40[3];
  v25 = sub_6F8C3BF0(&unk_6FB49FD8);
  *(_DWORD *)(v35 + 4 * v25) = v34;
  v35 = v40[3];
  v26 = sub_6F8C3BF0(&unk_6FB49DEC);
  *(_DWORD *)(v35 + 4 * v26) = v39;
  v39 = v40[3];
  v27 = sub_6F8C3BF0(&unk_6FB49DF0);
  *(_DWORD *)(v39 + 4 * v27) = v38;
  v39 = v40[3];
  v28 = sub_6F8C3BF0(&unk_6FB49FDC);
  *(_DWORD *)(v39 + 4 * v28) = v33;
  v39 = v40[3];
  v29 = sub_6F8C3BF0(&unk_6FB49DF4);
  *(_DWORD *)(v39 + 4 * v29) = v37;
  v40 = (_DWORD *)v40[3];
  v30 = sub_6F8C3BF0(&unk_6FB49DF8);
  v40[v30] = v36;
  return sub_6F8A1AD0((int *)&v41);
}
