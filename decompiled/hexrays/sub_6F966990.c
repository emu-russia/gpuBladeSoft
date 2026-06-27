int sub_6F966990()
{
  int v0; // eax@17
  int v1; // eax@43
  int v2; // eax@49
  int v3; // eax@55
  int v4; // eax@61
  int v5; // eax@67
  int v6; // eax@73
  int v7; // eax@79
  int v8; // eax@85
  int v9; // eax@85
  int v10; // eax@89
  int v11; // eax@89
  int v12; // eax@93
  int v13; // eax@93
  char *v15; // [sp+48h] [bp-110h]@23
  char v16; // [sp+50h] [bp-108h]@31
  char *v17; // [sp+60h] [bp-F8h]@23
  char v18; // [sp+68h] [bp-F0h]@33
  char *v19; // [sp+78h] [bp-E0h]@23
  char *v20; // [sp+7Ch] [bp-DCh]@1
  char v21; // [sp+80h] [bp-D8h]@29
  char v22; // [sp+84h] [bp-D4h]@7
  char *v23; // [sp+90h] [bp-C8h]@23
  char *v24; // [sp+94h] [bp-C4h]@1
  char v25; // [sp+98h] [bp-C0h]@35
  char v26; // [sp+9Ch] [bp-BCh]@9
  char *v27; // [sp+A8h] [bp-B0h]@23
  char *v28; // [sp+ACh] [bp-ACh]@1
  char v29; // [sp+B0h] [bp-A8h]@27
  char v30; // [sp+B4h] [bp-A4h]@5
  char *v31; // [sp+C0h] [bp-98h]@37
  char *v32; // [sp+C4h] [bp-94h]@1
  char v33; // [sp+C8h] [bp-90h]@37
  char v34; // [sp+CCh] [bp-8Ch]@11
  void **v35; // [sp+D4h] [bp-84h]@81
  void **v36; // [sp+D8h] [bp-80h]@23
  void **v37; // [sp+DCh] [bp-7Ch]@1
  void **v38; // [sp+E0h] [bp-78h]@25
  void **v39; // [sp+E4h] [bp-74h]@3
  void **v40; // [sp+E8h] [bp-70h]@51
  void **v41; // [sp+ECh] [bp-6Ch]@45
  void **v42; // [sp+F0h] [bp-68h]@19
  void **v43; // [sp+F4h] [bp-64h]@1
  char *v44; // [sp+F8h] [bp-60h]@19
  char *v45; // [sp+FCh] [bp-5Ch]@13
  char *v46; // [sp+100h] [bp-58h]@49
  char *v47; // [sp+104h] [bp-54h]@43
  char *v48; // [sp+108h] [bp-50h]@17
  char *v49; // [sp+10Ch] [bp-4Ch]@1
  char *v50; // [sp+110h] [bp-48h]@65
  char *v51; // [sp+114h] [bp-44h]@1
  char *v52; // [sp+118h] [bp-40h]@53
  char *v53; // [sp+11Ch] [bp-3Ch]@47
  char *v54; // [sp+120h] [bp-38h]@21
  char *Memory; // [sp+124h] [bp-34h]@1
  char v56; // [sp+12Ch] [bp-2Ch]@15

  sub_6F72E430((int)&Memory, (int)j_j__vsnprintf, 16, "%d", 64);
  sub_6F695280(&v43, ".");
  sub_6F72E430((int)&v32, (int)j_j__vsnprintf, 16, "%d", 1);
  sub_6F695280(&v24, "-");
  sub_6F695280(&v20, "gpuBladeSoft");
  sub_6F7544E0((int)&v28, (int)&v20, (int)&v24);
  sub_6F7544E0((int)&v37, (int)&v28, (int)&v32);
  sub_6F7544E0((int)&v49, (int)&v37, (int)&v43);
  sub_6F7544E0((int)&dword_6FCFFF2C, (int)&v49, (int)&Memory);
  if ( (char **)v49 != &v51 )
    j_free_1(v49);
  if ( (void ***)v37 != &v39 )
    j_free_1(v37);
  if ( v28 != &v30 )
    j_free_1(v28);
  if ( v20 != &v22 )
    j_free_1(v20);
  if ( v24 != &v26 )
    j_free_1(v24);
  if ( v32 != &v34 )
    j_free_1(v32);
  if ( (char **)v43 != &v45 )
    j_free_1(v43);
  if ( Memory != &v56 )
    j_free_1(Memory);
  sub_6F6813F0((int)sub_6F72A970);
  sub_6F695280(&Memory, "ini");
  sub_6F695280(&v43, ".");
  sub_6F93BDA0((int)&v43, 0, 0, (int)dword_6FCFFF2C);
  sub_6F93C4C0((int)&v48, v0);
  sub_6F7544E0((int)&dword_6FCFFF14, (int)&v48, (int)&Memory);
  if ( (char **)v48 != &v51 )
    j_free_1(v48);
  if ( (char **)v42 != &v44 )
    j_free_1(v42);
  if ( v54 != &v56 )
    j_free_1(v54);
  sub_6F6813F0((int)sub_6F72A940);
  sub_6F695280(&Memory, ".exe");
  sub_6F72E430((int)&v42, (int)j_j__vsnprintf, 16, "%d", 64);
  sub_6F695280(&v32, ".");
  sub_6F72E430((int)&v23, (int)j_j__vsnprintf, 16, "%d", 1);
  sub_6F695280(&v17, "-");
  sub_6F695280(&v15, "gpuBladeSoftGui");
  sub_6F7544E0((int)&v19, (int)&v15, (int)&v17);
  sub_6F7544E0((int)&v27, (int)&v19, (int)&v23);
  sub_6F7544E0((int)&v36, (int)&v27, (int)&v32);
  sub_6F7544E0((int)&v48, (int)&v36, (int)&v42);
  sub_6F7544E0((int)&dword_6FCFFEFC, (int)&v48, (int)&Memory);
  if ( (char **)v48 != &v51 )
    j_free_1(v48);
  if ( (void ***)v36 != &v38 )
    j_free_1(v36);
  if ( v27 != &v29 )
    j_free_1(v27);
  if ( v19 != &v21 )
    j_free_1(v19);
  if ( v15 != &v16 )
    j_free_1(v15);
  if ( v17 != &v18 )
    j_free_1(v17);
  if ( v23 != &v25 )
    j_free_1(v23);
  if ( v31 != &v33 )
    j_free_1(v31);
  if ( (char **)v42 != &v44 )
    j_free_1(v42);
  if ( v54 != &v56 )
    j_free_1(v54);
  sub_6F6813F0((int)sub_6F72A910);
  sub_6F695280(&Memory, "log");
  sub_6F695280(&v42, ".");
  sub_6F93BDA0((int)&v42, 0, 0, (int)dword_6FCFFF2C);
  sub_6F93C4C0((int)&v47, v1);
  sub_6F7544E0((int)&dword_6FCFFEE4, (int)&v47, (int)&Memory);
  if ( (char **)v47 != &v51 )
    j_free_1(v47);
  if ( (void ***)v41 != &v43 )
    j_free_1(v41);
  if ( v53 != &v56 )
    j_free_1(v53);
  sub_6F6813F0((int)sub_6F72A8E0);
  sub_6F695280(&dword_6FCFFECC, ".");
  sub_6F6813F0((int)sub_6F72A8B0);
  sub_6F695280(&Memory, "configs");
  sub_6F695280(&v41, "/");
  sub_6F93BDA0((int)&v41, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v46, v2);
  sub_6F7544E0((int)&dword_6FCFFEB4, (int)&v46, (int)&Memory);
  if ( (char **)v46 != &v51 )
    j_free_1(v46);
  if ( (void ***)v40 != &v42 )
    j_free_1(v40);
  if ( v52 != &v56 )
    j_free_1(v52);
  sub_6F6813F0((int)sub_6F72A880);
  sub_6F695280(&Memory, "plugins");
  sub_6F695280(&v40, "/");
  sub_6F93BDA0((int)&v40, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v45, v3);
  sub_6F7544E0((int)&dword_6FCFFE9C, (int)&v45, (int)&Memory);
  if ( (char **)v45 != &v51 )
    j_free_1(v45);
  if ( (void ***)v39 != &v41 )
    j_free_1(v39);
  if ( v51 != &v56 )
    j_free_1(v51);
  sub_6F6813F0((int)sub_6F72A850);
  sub_6F695280(&Memory, "logs");
  sub_6F695280(&v39, "/");
  sub_6F93BDA0((int)&v39, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v44, v4);
  sub_6F7544E0((int)&dword_6FCFFE84, (int)&v44, (int)&Memory);
  if ( (char **)v44 != &v51 )
    j_free_1(v44);
  if ( (void ***)v38 != &v40 )
    j_free_1(v38);
  if ( v50 != &v56 )
    j_free_1(v50);
  sub_6F6813F0((int)sub_6F72A820);
  sub_6F695280(&Memory, "langs");
  sub_6F695280(&v38, "/");
  sub_6F93BDA0((int)&v38, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v43, v5);
  sub_6F7544E0((int)&dword_6FCFFE6C, (int)&v43, (int)&Memory);
  if ( (char **)v43 != &v51 )
    j_free_1(v43);
  if ( (void ***)v37 != &v39 )
    j_free_1(v37);
  if ( v49 != &v56 )
    j_free_1(v49);
  sub_6F6813F0((int)sub_6F72A7F0);
  sub_6F695280(&Memory, "captured");
  sub_6F695280(&v37, "/");
  sub_6F93BDA0((int)&v37, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v42, v6);
  sub_6F7544E0((int)&dword_6FBB5020, (int)&v42, (int)&Memory);
  if ( (char **)v42 != &v51 )
    j_free_1(v42);
  if ( (void ***)v36 != &v38 )
    j_free_1(v36);
  if ( v48 != &v56 )
    j_free_1(v48);
  sub_6F6813F0((int)sub_6F72A7C0);
  sub_6F695280(&Memory, "shaders");
  sub_6F695280(&v36, "/");
  sub_6F93BDA0((int)&v36, 0, 0, (int)dword_6FCFFECC);
  sub_6F93C4C0((int)&v41, v7);
  sub_6F7544E0((int)&dword_6FCFFF44, (int)&v41, (int)&Memory);
  if ( (char **)v41 != &v51 )
    j_free_1(v41);
  if ( (void ***)v35 != &v37 )
    j_free_1(v35);
  if ( v47 != &v56 )
    j_free_1(v47);
  sub_6F6813F0((int)sub_6F72A790);
  sub_6F695280(&v41, "/");
  sub_6F93BDA0((int)&v41, 0, 0, (int)dword_6FCFFEB4);
  sub_6F93C4C0((int)&Memory, v8);
  v9 = sub_6F93C0E0((int)&Memory, dword_6FCFFF14, dword_6FCFFF18);
  sub_6F93C4C0((int)&dword_6FBB5038, v9);
  if ( v46 != &v56 )
    j_free_1(v46);
  if ( (char **)v40 != &v51 )
    j_free_1(v40);
  sub_6F6813F0((int)sub_6F72A760);
  sub_6F695280(&v40, "/");
  sub_6F93BDA0((int)&v40, 0, 0, (int)dword_6FCFFE9C);
  sub_6F93C4C0((int)&Memory, v10);
  v11 = sub_6F93C0E0((int)&Memory, dword_6FCFFEFC, dword_6FCFFF00);
  sub_6F93C4C0((int)&dword_6FCFFE54, v11);
  if ( v45 != &v56 )
    j_free_1(v45);
  if ( (char **)v39 != &v51 )
    j_free_1(v39);
  sub_6F6813F0((int)sub_6F72A730);
  sub_6F695280(&v39, "/");
  sub_6F93BDA0((int)&v39, 0, 0, (int)dword_6FCFFE84);
  sub_6F93C4C0((int)&Memory, v12);
  v13 = sub_6F93C0E0((int)&Memory, dword_6FCFFEE4, dword_6FCFFEE8);
  sub_6F93C4C0((int)&dword_6FBB51C4, v13);
  if ( v44 != &v56 )
    j_free_1(v44);
  if ( (char **)v38 != &v51 )
    j_free_1(v38);
  return sub_6F6813F0((int)sub_6F72A700);
}
