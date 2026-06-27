int __thiscall sub_6F936D10(_DWORD *this, int a2)
{
  int *v2; // edx@1
  void *v3; // eax@1
  void *v4; // eax@3
  int *v5; // eax@5
  int v6; // eax@7
  int v7; // eax@7
  int v8; // eax@7
  int v9; // eax@7
  int v10; // eax@7
  int v11; // eax@7
  int v12; // eax@7
  int v13; // eax@7
  int v15; // [sp+0h] [bp-78h]@1
  int v16; // [sp+14h] [bp-64h]@7
  int *v17; // [sp+18h] [bp-60h]@1
  char v18; // [sp+1Ch] [bp-5Ch]@1
  int v19; // [sp+20h] [bp-58h]@7
  int (__cdecl *v20)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-44h]@1
  int *v21; // [sp+38h] [bp-40h]@1
  char *v22; // [sp+3Ch] [bp-3Ch]@1
  int (*v23)(); // [sp+40h] [bp-38h]@1
  int *v24; // [sp+44h] [bp-34h]@1
  int *v25; // [sp+58h] [bp-20h]@7
  int *v26; // [sp+5Ch] [bp-1Ch]@7
  int *v27; // [sp+60h] [bp-18h]@7
  int *v28; // [sp+64h] [bp-14h]@7
  int *v29; // [sp+68h] [bp-10h]@7
  int *v30; // [sp+6Ch] [bp-Ch]@7
  char v31; // [sp+70h] [bp-8h]@1

  v17 = this;
  v22 = &v31;
  v20 = sub_6F962A50;
  v21 = dword_6F96AB54;
  v23 = sub_6F937CFE;
  v24 = &v15;
  sub_6F8A1A60((int *)&v18);
  v2 = v17;
  v17[2] = 46;
  *v2 = a2;
  v3 = &unk_6FB49840;
  do
  {
    *(_DWORD *)v3 = 0;
    v3 = (char *)v3 + 4;
  }
  while ( v3 != &unk_6FB498F8 );
  v17[1] = (int)&unk_6FB49840;
  v4 = &unk_6FB49740;
  do
  {
    *(_DWORD *)v4 = 0;
    v4 = (char *)v4 + 4;
  }
  while ( v4 != &unk_6FB497F8 );
  v17[3] = (int)&unk_6FB49740;
  v5 = &dword_6FB49724;
  do
  {
    *v5 = 0;
    ++v5;
  }
  while ( (int *)&unk_6FB4973C != v5 );
  dword_6FB49724 = (int)&word_6FB49200;
  v17[4] = (int)&dword_6FB49724;
  word_6FB49200 = *(_WORD *)sub_6F937F90();
  v19 = 1;
  sub_6F934FC0((int)&unk_6FB49220, 0, 0, 1);
  sub_6F936510(v17, &unk_6FB49F40, (int)&unk_6FB49220);
  sub_6F953D20(&unk_6FB49800, 1);
  sub_6F936510(v17, &unk_6FB49FA8, (int)&unk_6FB49800);
  dword_6FB48D84 = 1;
  word_6FB48DA4 = 0;
  dword_6FB48D80 = (int)off_6FBB0800;
  dword_6FB48D88 = 0;
  dword_6FB48D8C = 0;
  byte_6FB48D90 = 0;
  dword_6FB48D94 = 0;
  dword_6FB48D98 = 0;
  dword_6FB48D9C = 0;
  dword_6FB48DA0 = 0;
  byte_6FB48DE4 = 0;
  dword_6FB48C80 = 1;
  dword_6FB48C7C = (int)off_6FBAFFD0;
  dword_6FB48C84 = (int)&dword_6FB48D80;
  v19 = 2;
  sub_6F952D90((int)&dword_6FB48C7C, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F80, (int)&dword_6FB48C7C);
  dword_6FB49908 = 1;
  dword_6FB49904 = (int)off_6FBB0DB8;
  sub_6F936510(v17, &unk_6FB49FB8, (int)&dword_6FB49904);
  dword_6FB49918 = 1;
  dword_6FB49914 = (int)off_6FBB0E30;
  sub_6F936510(v17, &unk_6FB49FC0, (int)&dword_6FB49914);
  dword_6FB4981C = 1;
  dword_6FB49818 = (int)off_6FBAFF60;
  v19 = 3;
  dword_6FB49820 = sub_6F937FA0();
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F70, (int)&dword_6FB49818);
  dword_6FB49080 = (int)off_6FBB0924;
  dword_6FB49084 = 1;
  dword_6FB49088 = 0;
  dword_6FB4908C = 0;
  word_6FB49090 = 0;
  byte_6FB49092 = 0;
  dword_6FB49094 = 0;
  dword_6FB49098 = 0;
  dword_6FB4909C = 0;
  dword_6FB490A0 = 0;
  dword_6FB490A4 = 0;
  dword_6FB490A8 = 0;
  dword_6FB490AC = 0;
  dword_6FB490B0 = 0;
  dword_6FB490B4 = 0;
  byte_6FB490C3 = 0;
  dword_6FB48D28 = 1;
  dword_6FB48D24 = (int)off_6FBAFB18;
  dword_6FB48D2C = (int)&dword_6FB49080;
  v19 = 4;
  sub_6F9386F0((int)&dword_6FB48D24, 0, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F60, (int)&dword_6FB48D24);
  dword_6FB490E0 = (int)off_6FBB0934;
  dword_6FB490E4 = 1;
  dword_6FB490E8 = 0;
  dword_6FB490EC = 0;
  word_6FB490F0 = 0;
  byte_6FB490F2 = 0;
  dword_6FB490F4 = 0;
  dword_6FB490F8 = 0;
  dword_6FB490FC = 0;
  dword_6FB49100 = 0;
  dword_6FB49104 = 0;
  dword_6FB49108 = 0;
  dword_6FB4910C = 0;
  dword_6FB49110 = 0;
  dword_6FB49114 = 0;
  byte_6FB49123 = 0;
  dword_6FB48D34 = 1;
  dword_6FB48D30 = (int)off_6FBAFB4C;
  dword_6FB48D38 = (int)&dword_6FB490E0;
  v19 = 5;
  sub_6F938D50((int)&dword_6FB48D30, 0, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F64, (int)&dword_6FB48D30);
  dword_6FB48CC8 = 1;
  dword_6FB48CC4 = (int)off_6FBB0070;
  sub_6F936510(v17, &unk_6FB49F90, (int)&dword_6FB48CC4);
  dword_6FB48CD8 = 1;
  dword_6FB48CD4 = (int)off_6FBB00A0;
  sub_6F936510(v17, &unk_6FB49F98, (int)&dword_6FB48CD4);
  dword_6FB48EC4 = 1;
  dword_6FB48EC0 = (int)off_6FBB0834;
  dword_6FB48EC8 = 0;
  dword_6FB48ECC = 0;
  dword_6FB48ED0 = 0;
  dword_6FB48ED4 = 0;
  dword_6FB48ED8 = 0;
  dword_6FB48EDC = 0;
  dword_6FB48EE0 = 0;
  dword_6FB48EE4 = 0;
  dword_6FB48EE8 = 0;
  dword_6FB48EEC = 0;
  dword_6FB48EF0 = 0;
  dword_6FB48EF4 = 0;
  dword_6FB48EF8 = 0;
  dword_6FB48EFC = 0;
  dword_6FB48F00 = 0;
  dword_6FB48F04 = 0;
  dword_6FB48F08 = 0;
  dword_6FB48F0C = 0;
  dword_6FB48F10 = 0;
  dword_6FB48F14 = 0;
  dword_6FB48F18 = 0;
  dword_6FB48F1C = 0;
  dword_6FB48F20 = 0;
  dword_6FB48F24 = 0;
  dword_6FB48F28 = 0;
  dword_6FB48F2C = 0;
  dword_6FB48F30 = 0;
  dword_6FB48F34 = 0;
  dword_6FB48F38 = 0;
  dword_6FB48F3C = 0;
  dword_6FB48F40 = 0;
  dword_6FB48F44 = 0;
  dword_6FB48F48 = 0;
  dword_6FB48F4C = 0;
  dword_6FB48F50 = 0;
  dword_6FB48F54 = 0;
  dword_6FB48F58 = 0;
  dword_6FB48F5C = 0;
  dword_6FB48F60 = 0;
  dword_6FB48F64 = 0;
  dword_6FB48F68 = 0;
  dword_6FB48F6C = 0;
  dword_6FB48F70 = 0;
  dword_6FB48F74 = 0;
  dword_6FB48F78 = 0;
  dword_6FB48F7C = 0;
  dword_6FB48F80 = 0;
  byte_6FB48F84 = 0;
  sub_6F90C4A0(&unk_6FB48CE4, (int)&dword_6FB48EC0, 1);
  sub_6F936510(v17, &unk_6FB49DFC, (int)&unk_6FB48CE4);
  dword_6FB48C98 = 1;
  dword_6FB48C94 = (int)off_6FBB0018;
  sub_6F936510(v17, &unk_6FB49F88, (int)&dword_6FB48C94);
  dword_6FB48CA8 = 1;
  dword_6FB48CA4 = (int)off_6FBB0F84;
  sub_6F936510(v17, &unk_6FB49FE8, (int)&dword_6FB48CA4);
  sub_6F9526F0(&unk_6FB48C5C, 1);
  sub_6F936510(v17, &unk_6FB49F78, (int)&unk_6FB48C5C);
  sub_6F935280(&unk_6FB49440, 1);
  sub_6F936510(v17, &unk_6FB49F44, (int)&unk_6FB49440);
  sub_6F953F50(&unk_6FB4980C, 1);
  sub_6F936510(v17, &unk_6FB49FAC, (int)&unk_6FB4980C);
  dword_6FB48E04 = 1;
  dword_6FB48E00 = (int)off_6FBB0810;
  dword_6FB48E08 = 0;
  dword_6FB48E0C = 0;
  byte_6FB48E10 = 0;
  dword_6FB48E14 = 0;
  dword_6FB48E18 = 0;
  dword_6FB48E1C = 0;
  dword_6FB48E20 = 0;
  dword_6FB48E24 = 0;
  byte_6FB48EA4 = 0;
  dword_6FB48C8C = 1;
  dword_6FB48C88 = (int)off_6FBAFFF4;
  dword_6FB48C90 = (int)&dword_6FB48E00;
  v19 = 6;
  sub_6F9533A0((int)&dword_6FB48C88, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F84, (int)&dword_6FB48C88);
  dword_6FB49910 = 1;
  dword_6FB4990C = (int)off_6FBB0DF4;
  sub_6F936510(v17, &unk_6FB49FBC, (int)&dword_6FB4990C);
  dword_6FB49920 = 1;
  dword_6FB4991C = (int)off_6FBB0E60;
  sub_6F936510(v17, &unk_6FB49FC4, (int)&dword_6FB4991C);
  dword_6FB49828 = 1;
  dword_6FB49824 = (int)off_6FBAFF7C;
  v19 = 7;
  dword_6FB4982C = sub_6F937FA0();
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F74, (int)&dword_6FB49824);
  dword_6FB49144 = 1;
  dword_6FB49140 = (int)off_6FBB0944;
  dword_6FB49148 = 0;
  dword_6FB4914C = 0;
  byte_6FB49150 = 0;
  dword_6FB49152 = 0;
  dword_6FB49158 = 0;
  dword_6FB4915C = 0;
  dword_6FB49160 = 0;
  dword_6FB49164 = 0;
  dword_6FB49168 = 0;
  dword_6FB4916C = 0;
  dword_6FB49170 = 0;
  dword_6FB49174 = 0;
  dword_6FB49178 = 0;
  byte_6FB49192 = 0;
  dword_6FB48D40 = 1;
  dword_6FB48D3C = (int)off_6FBAFB80;
  dword_6FB48D44 = (int)&dword_6FB49140;
  v19 = 8;
  sub_6F9393B0((int)&dword_6FB48D3C, 0, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F68, (int)&dword_6FB48D3C);
  dword_6FB491A4 = 1;
  dword_6FB491A0 = (int)off_6FBB0954;
  dword_6FB491A8 = 0;
  dword_6FB491AC = 0;
  byte_6FB491B0 = 0;
  dword_6FB491B2 = 0;
  dword_6FB491B8 = 0;
  dword_6FB491BC = 0;
  dword_6FB491C0 = 0;
  dword_6FB491C4 = 0;
  dword_6FB491C8 = 0;
  dword_6FB491CC = 0;
  dword_6FB491D0 = 0;
  dword_6FB491D4 = 0;
  dword_6FB491D8 = 0;
  byte_6FB491F2 = 0;
  dword_6FB48D4C = 1;
  dword_6FB48D48 = (int)off_6FBAFBB4;
  dword_6FB48D50 = (int)&dword_6FB491A0;
  v19 = 9;
  sub_6F939A20((int)&dword_6FB48D48, 0, 0);
  v19 = 1;
  sub_6F936510(v17, &unk_6FB49F6C, (int)&dword_6FB48D48);
  dword_6FB48CD0 = 1;
  dword_6FB48CCC = (int)off_6FBB0088;
  sub_6F936510(v17, &unk_6FB49F94, (int)&dword_6FB48CCC);
  dword_6FB48CE0 = 1;
  dword_6FB48CDC = (int)off_6FBB00B8;
  sub_6F936510(v17, &unk_6FB49F9C, (int)&dword_6FB48CDC);
  dword_6FB48FA4 = 1;
  dword_6FB48FA0 = (int)off_6FBB0844;
  dword_6FB48FA8 = 0;
  dword_6FB48FAC = 0;
  dword_6FB48FB0 = 0;
  dword_6FB48FB4 = 0;
  dword_6FB48FB8 = 0;
  dword_6FB48FBC = 0;
  dword_6FB48FC0 = 0;
  dword_6FB48FC4 = 0;
  dword_6FB48FC8 = 0;
  dword_6FB48FCC = 0;
  dword_6FB48FD0 = 0;
  dword_6FB48FD4 = 0;
  dword_6FB48FD8 = 0;
  dword_6FB48FDC = 0;
  dword_6FB48FE0 = 0;
  dword_6FB48FE4 = 0;
  dword_6FB48FE8 = 0;
  dword_6FB48FEC = 0;
  dword_6FB48FF0 = 0;
  dword_6FB48FF4 = 0;
  dword_6FB48FF8 = 0;
  dword_6FB48FFC = 0;
  dword_6FB49000 = 0;
  dword_6FB49004 = 0;
  dword_6FB49008 = 0;
  dword_6FB4900C = 0;
  dword_6FB49010 = 0;
  dword_6FB49014 = 0;
  dword_6FB49018 = 0;
  dword_6FB4901C = 0;
  dword_6FB49020 = 0;
  dword_6FB49024 = 0;
  dword_6FB49028 = 0;
  dword_6FB4902C = 0;
  dword_6FB49030 = 0;
  dword_6FB49034 = 0;
  dword_6FB49038 = 0;
  dword_6FB4903C = 0;
  dword_6FB49040 = 0;
  dword_6FB49044 = 0;
  dword_6FB49048 = 0;
  dword_6FB4904C = 0;
  dword_6FB49050 = 0;
  dword_6FB49054 = 0;
  dword_6FB49058 = 0;
  dword_6FB4905C = 0;
  dword_6FB49060 = 0;
  byte_6FB49064 = 0;
  sub_6F90CE80(&unk_6FB48CF8, (int)&dword_6FB48FA0, 1);
  sub_6F936510(v17, &unk_6FB49E00, (int)&unk_6FB48CF8);
  dword_6FB48CA0 = 1;
  dword_6FB48C9C = (int)off_6FBB0044;
  sub_6F936510(v17, &unk_6FB49F8C, (int)&dword_6FB48C9C);
  dword_6FB48CB0 = 1;
  dword_6FB48CAC = (int)off_6FBB0F98;
  sub_6F936510(v17, &unk_6FB49FEC, (int)&dword_6FB48CAC);
  sub_6F952A90(&unk_6FB48C6C, 1);
  sub_6F936510(v17, &unk_6FB49F7C, (int)&unk_6FB48C6C);
  dword_6FB48CB8 = 1;
  dword_6FB48CB4 = (int)off_6FBB0CFC;
  sub_6F936510(v17, &unk_6FB49FA4, (int)&dword_6FB48CB4);
  dword_6FB48CC0 = 1;
  dword_6FB48CBC = (int)off_6FBB0CD0;
  sub_6F936510(v17, &unk_6FB49FA0, (int)&dword_6FB48CBC);
  v25 = &dword_6FB48D80;
  v26 = &dword_6FB49080;
  v27 = &dword_6FB490E0;
  v28 = &dword_6FB48E00;
  v29 = &dword_6FB49140;
  v30 = &dword_6FB491A0;
  sub_6F9355D0(v17, (int)&v25);
  v16 = v17[3];
  v6 = sub_6F8C3BF0(&unk_6FB49F80);
  *(_DWORD *)(v16 + 4 * v6) = &dword_6FB48D80;
  v16 = v17[3];
  v7 = sub_6F8C3BF0(&unk_6FB49F60);
  *(_DWORD *)(v16 + 4 * v7) = &dword_6FB49080;
  v16 = v17[3];
  v8 = sub_6F8C3BF0(&unk_6FB49F64);
  *(_DWORD *)(v16 + 4 * v8) = &dword_6FB490E0;
  v16 = v17[3];
  v9 = sub_6F8C3BF0(&unk_6FB49DFC);
  *(_DWORD *)(v16 + 4 * v9) = &dword_6FB48EC0;
  v16 = v17[3];
  v10 = sub_6F8C3BF0(&unk_6FB49F84);
  *(_DWORD *)(v16 + 4 * v10) = &dword_6FB48E00;
  v16 = v17[3];
  v11 = sub_6F8C3BF0(&unk_6FB49F68);
  *(_DWORD *)(v16 + 4 * v11) = &dword_6FB49140;
  v16 = v17[3];
  v12 = sub_6F8C3BF0(&unk_6FB49F6C);
  *(_DWORD *)(v16 + 4 * v12) = &dword_6FB491A0;
  v17 = (int *)v17[3];
  v13 = sub_6F8C3BF0(&unk_6FB49E00);
  v17[v13] = (int)&dword_6FB48FA0;
  return sub_6F8A1AD0((int *)&v18);
}
