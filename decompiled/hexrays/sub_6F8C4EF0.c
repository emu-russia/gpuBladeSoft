_DWORD *__thiscall sub_6F8C4EF0(void *this, void *a2)
{
  int *v2; // eax@1
  _DWORD *v4; // eax@20
  _DWORD *v5; // eax@20
  char *v6; // ecx@20
  _DWORD *v7; // eax@21
  _DWORD *v8; // eax@21
  int v9; // ecx@21
  int v10; // edx@21
  int v11; // eax@21
  _DWORD *v12; // eax@22
  char *v13; // ecx@22
  _DWORD *v14; // eax@23
  int v15; // eax@23
  int v16; // ecx@23
  int v17; // eax@23
  char *v18; // ecx@23
  _DWORD *v19; // eax@24
  int v20; // eax@24
  int v21; // ecx@24
  int v22; // eax@24
  char *v23; // ecx@24
  _DWORD *v24; // eax@25
  char *v25; // edx@25
  _DWORD *v26; // eax@26
  char *v27; // ecx@26
  _WORD *v28; // eax@27
  _DWORD *v29; // eax@27
  int v30; // ecx@27
  int v31; // edx@27
  int v32; // eax@27
  _DWORD *v33; // eax@28
  _DWORD *v34; // eax@28
  int v35; // ecx@28
  int v36; // edx@28
  int v37; // eax@28
  _DWORD *v38; // eax@29
  _DWORD *v39; // eax@29
  char *v40; // ecx@29
  _DWORD *v41; // eax@30
  _DWORD *v42; // eax@30
  int v43; // edx@30
  int v44; // ecx@30
  int v45; // eax@30
  _DWORD *v46; // eax@31
  char *v47; // edx@31
  _DWORD *v48; // eax@32
  char *v49; // ecx@32
  _DWORD *v50; // eax@33
  char *v51; // ecx@33
  void *v52; // eax@34
  _DWORD *v53; // eax@34
  int v54; // ecx@34
  int v55; // edx@34
  int v56; // eax@34
  void *v57; // eax@35
  _DWORD *v58; // eax@35
  int v59; // edx@35
  int v60; // ecx@35
  int v61; // eax@35
  int v62; // [sp+0h] [bp-78h]@1
  _DWORD *v63; // [sp+18h] [bp-60h]@35
  _DWORD *v64; // [sp+1Ch] [bp-5Ch]@34
  _DWORD *v65; // [sp+20h] [bp-58h]@30
  _DWORD *v66; // [sp+24h] [bp-54h]@28
  _DWORD *v67; // [sp+28h] [bp-50h]@27
  _DWORD *v68; // [sp+2Ch] [bp-4Ch]@21
  int v69; // [sp+30h] [bp-48h]@21
  _DWORD *v70; // [sp+34h] [bp-44h]@2
  char *v71; // [sp+38h] [bp-40h]@1
  char v72; // [sp+3Ch] [bp-3Ch]@1
  int v73; // [sp+40h] [bp-38h]@20
  int (__cdecl *v74)(int, int, __int64, void (**)(void), int *); // [sp+54h] [bp-24h]@1
  int *v75; // [sp+58h] [bp-20h]@1
  char *v76; // [sp+5Ch] [bp-1Ch]@1
  int (*v77)(); // [sp+60h] [bp-18h]@1
  int *v78; // [sp+64h] [bp-14h]@1
  char v79; // [sp+70h] [bp-8h]@1

  v71 = (char *)this;
  v76 = &v79;
  v74 = sub_6F962A50;
  v75 = dword_6F96B28C;
  v77 = sub_6F8C588B;
  v78 = &v62;
  sub_6F8A1A60((int *)&v72);
  v2 = (int *)sub_6F962940(v71, (int)&off_6FBAC374, (int)&off_6FBAC36C, -2);
  if ( v2 )
  {
    v70 = (_DWORD *)*v2;
  }
  else if ( a2 == &unk_6FB49F80 )
  {
    v73 = -1;
    v7 = sub_6F961B60(0x68u);
    v7[1] = 0;
    *v7 = off_6FBB0800;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    *((_WORD *)v7 + 18) = 0;
    v69 = (int)v7;
    *((_BYTE *)v7 + 100) = 0;
    v8 = sub_6F961B60(0x14u);
    v8[1] = 0;
    *v8 = off_6FBAFFD0;
    v68 = v8;
    v8[2] = v69;
    v73 = 4;
    v70 = v8;
    sub_6F952D90((int)v8, 0);
    v9 = (int)v70;
    v10 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4), 1u);
    v11 = v69;
    *(_DWORD *)v9 = off_6FBAF734;
    *(_DWORD *)(v9 + 16) = v11;
    LOBYTE(v62) = 0;
    v73 = 3;
    sub_6F912970(v62, v10, v11);
  }
  else if ( a2 == &unk_6FB49F70 )
  {
    v73 = -1;
    v19 = sub_6F961B60(0x10u);
    v19[1] = 0;
    *v19 = off_6FBAFF60;
    v73 = 5;
    v70 = v19;
    v20 = sub_6F937FA0();
    v21 = (int)v70;
    v70[2] = v20;
    v22 = v21;
    v23 = v71;
    *(_DWORD *)(v22 + 12) = v71;
    _InterlockedAdd((volatile signed __int32 *)v23 + 1, 1u);
    *(_DWORD *)v22 = off_6FBAF654;
  }
  else if ( a2 == &unk_6FB49F88 )
  {
    v73 = -1;
    v12 = sub_6F961B60(0xCu);
    v13 = v71;
    v70 = v12;
    v12[1] = 0;
    *v12 = off_6FBB0018;
    v12[2] = v13;
    _InterlockedAdd((volatile signed __int32 *)v13 + 1, 1u);
    *v12 = off_6FBAF7C4;
  }
  else if ( a2 == &unk_6FB49F90 )
  {
    v73 = -1;
    v24 = sub_6F961B60(0xCu);
    v25 = v71;
    v70 = v24;
    v24[1] = 0;
    *v24 = off_6FBB0070;
    v24[2] = v25;
    _InterlockedAdd((volatile signed __int32 *)v25 + 1, 1u);
    *v24 = off_6FBAF86C;
  }
  else if ( a2 == &unk_6FB49F98 )
  {
    v73 = -1;
    v26 = sub_6F961B60(0xCu);
    v27 = v71;
    v70 = v26;
    v26[1] = 0;
    *v26 = off_6FBB00A0;
    v26[2] = v27;
    _InterlockedAdd((volatile signed __int32 *)v27 + 1, 1u);
    *v26 = off_6FBAF8CC;
  }
  else if ( a2 == &unk_6FB49F64 )
  {
    v73 = -1;
    v28 = sub_6F961B60(0x44u);
    v28[8] = 0;
    *(_DWORD *)v28 = off_6FBB0934;
    *((_DWORD *)v28 + 1) = 0;
    *((_DWORD *)v28 + 2) = 0;
    *((_DWORD *)v28 + 3) = 0;
    *((_BYTE *)v28 + 18) = 0;
    *((_DWORD *)v28 + 5) = 0;
    *((_DWORD *)v28 + 6) = 0;
    *((_DWORD *)v28 + 7) = 0;
    *((_DWORD *)v28 + 8) = 0;
    *((_DWORD *)v28 + 9) = 0;
    *((_DWORD *)v28 + 10) = 0;
    *((_DWORD *)v28 + 11) = 0;
    *((_DWORD *)v28 + 12) = 0;
    *((_DWORD *)v28 + 13) = 0;
    v69 = (int)v28;
    *((_BYTE *)v28 + 67) = 0;
    v29 = sub_6F961B60(0x14u);
    v29[1] = 0;
    *v29 = off_6FBAFB4C;
    v67 = v29;
    v29[2] = v69;
    v73 = 7;
    v70 = v29;
    sub_6F938D50((int)v29, 0, 0);
    v30 = (int)v70;
    v31 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v31 + 4), 1u);
    v32 = v69;
    *(_DWORD *)v30 = off_6FBAF994;
    *(_DWORD *)(v30 + 16) = v32;
    LOBYTE(v62) = 0;
    v73 = 6;
    sub_6F913A20(v62, v31, v32);
  }
  else if ( a2 == &unk_6FB49F60 )
  {
    v73 = -1;
    v33 = sub_6F961B60(0x44u);
    *v33 = off_6FBB0924;
    v33[1] = 0;
    v33[2] = 0;
    v33[3] = 0;
    *((_WORD *)v33 + 8) = 0;
    *((_BYTE *)v33 + 18) = 0;
    v33[5] = 0;
    v33[6] = 0;
    v33[7] = 0;
    v33[8] = 0;
    v33[9] = 0;
    v33[10] = 0;
    v33[11] = 0;
    v33[12] = 0;
    v33[13] = 0;
    v69 = (int)v33;
    *((_BYTE *)v33 + 67) = 0;
    v34 = sub_6F961B60(0x14u);
    v34[1] = 0;
    *v34 = off_6FBAFB18;
    v66 = v34;
    v34[2] = v69;
    v73 = 9;
    v70 = v34;
    sub_6F9386F0((int)v34, 0, 0);
    v35 = (int)v70;
    v36 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v36 + 4), 1u);
    v37 = v69;
    *(_DWORD *)v35 = off_6FBAF92C;
    *(_DWORD *)(v35 + 16) = v37;
    LOBYTE(v62) = 0;
    v73 = 8;
    sub_6F9133C0(v62, v36, v37);
  }
  else if ( a2 == &unk_6FB49F78 )
  {
    v73 = -1;
    v38 = sub_6F961B60(0x14u);
    v73 = 1;
    v70 = v38;
    sub_6F952830(v38, 0);
    v39 = v70;
    v40 = v71;
    v70[4] = v71;
    _InterlockedAdd((volatile signed __int32 *)v40 + 1, 1u);
    *v39 = off_6FBAF6C4;
  }
  else if ( a2 == &unk_6FB49F84 )
  {
    v73 = -1;
    v41 = sub_6F961B60(0xA8u);
    v41[1] = 0;
    *v41 = off_6FBB0810;
    v41[2] = 0;
    v41[3] = 0;
    *((_BYTE *)v41 + 16) = 0;
    v41[5] = 0;
    v41[6] = 0;
    v41[7] = 0;
    v41[8] = 0;
    v41[9] = 0;
    v69 = (int)v41;
    *((_BYTE *)v41 + 164) = 0;
    v42 = sub_6F961B60(0x14u);
    v42[1] = 0;
    *v42 = off_6FBAFFF4;
    v65 = v42;
    v42[2] = v69;
    v73 = 11;
    v70 = v42;
    sub_6F9533A0((int)v42, 0);
    v43 = (int)v70;
    v44 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v44 + 4), 1u);
    v45 = v69;
    *(_DWORD *)v43 = off_6FBAF77C;
    *(_DWORD *)(v43 + 16) = v45;
    LOBYTE(v62) = 0;
    v73 = 10;
    sub_6F912E40(v62, v44, v45);
  }
  else if ( a2 == &unk_6FB49F74 )
  {
    v73 = -1;
    v14 = sub_6F961B60(0x10u);
    v14[1] = 0;
    *v14 = off_6FBAFF7C;
    v73 = 12;
    v70 = v14;
    v15 = sub_6F937FA0();
    v16 = (int)v70;
    v70[2] = v15;
    v17 = v16;
    v18 = v71;
    *(_DWORD *)(v17 + 12) = v71;
    _InterlockedAdd((volatile signed __int32 *)v18 + 1, 1u);
    *(_DWORD *)v17 = off_6FBAF68C;
  }
  else if ( a2 == &unk_6FB49F8C )
  {
    v73 = -1;
    v46 = sub_6F961B60(0xCu);
    v47 = v71;
    v70 = v46;
    v46[1] = 0;
    *v46 = off_6FBB0044;
    v46[2] = v47;
    _InterlockedAdd((volatile signed __int32 *)v47 + 1, 1u);
    *v46 = off_6FBAF818;
  }
  else if ( a2 == &unk_6FB49F94 )
  {
    v73 = -1;
    v48 = sub_6F961B60(0xCu);
    v49 = v71;
    v70 = v48;
    v48[1] = 0;
    *v48 = off_6FBB0088;
    v48[2] = v49;
    _InterlockedAdd((volatile signed __int32 *)v49 + 1, 1u);
    *v48 = off_6FBAF89C;
  }
  else if ( a2 == &unk_6FB49F9C )
  {
    v73 = -1;
    v50 = sub_6F961B60(0xCu);
    v51 = v71;
    v70 = v50;
    v50[1] = 0;
    *v50 = off_6FBB00B8;
    v50[2] = v51;
    _InterlockedAdd((volatile signed __int32 *)v51 + 1, 1u);
    *v50 = off_6FBAF8FC;
  }
  else if ( a2 == &unk_6FB49F6C )
  {
    v73 = -1;
    v52 = sub_6F961B60(0x54u);
    *((_DWORD *)v52 + 1) = 0;
    *(_DWORD *)v52 = off_6FBB0954;
    *((_DWORD *)v52 + 2) = 0;
    *((_DWORD *)v52 + 3) = 0;
    *((_BYTE *)v52 + 16) = 0;
    *(_DWORD *)((char *)v52 + 18) = 0;
    *((_DWORD *)v52 + 6) = 0;
    *((_DWORD *)v52 + 7) = 0;
    *((_DWORD *)v52 + 8) = 0;
    *((_DWORD *)v52 + 9) = 0;
    *((_DWORD *)v52 + 10) = 0;
    *((_DWORD *)v52 + 11) = 0;
    *((_DWORD *)v52 + 12) = 0;
    *((_DWORD *)v52 + 13) = 0;
    *((_DWORD *)v52 + 14) = 0;
    v69 = (int)v52;
    *((_BYTE *)v52 + 82) = 0;
    v53 = sub_6F961B60(0x14u);
    v53[1] = 0;
    *v53 = off_6FBAFBB4;
    v64 = v53;
    v53[2] = v69;
    v73 = 14;
    v70 = v53;
    sub_6F939A20((int)v53, 0, 0);
    v54 = (int)v70;
    v55 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v55 + 4), 1u);
    v56 = v69;
    *(_DWORD *)v54 = off_6FBAFA64;
    *(_DWORD *)(v54 + 16) = v56;
    LOBYTE(v62) = 0;
    v73 = 13;
    sub_6F9147F0(v62, v55, v56);
  }
  else if ( a2 == &unk_6FB49F68 )
  {
    v73 = -1;
    v57 = sub_6F961B60(0x54u);
    *((_DWORD *)v57 + 1) = 0;
    *(_DWORD *)v57 = off_6FBB0944;
    *((_DWORD *)v57 + 2) = 0;
    *((_DWORD *)v57 + 3) = 0;
    *((_BYTE *)v57 + 16) = 0;
    *(_DWORD *)((char *)v57 + 18) = 0;
    *((_DWORD *)v57 + 6) = 0;
    *((_DWORD *)v57 + 7) = 0;
    *((_DWORD *)v57 + 8) = 0;
    *((_DWORD *)v57 + 9) = 0;
    *((_DWORD *)v57 + 10) = 0;
    *((_DWORD *)v57 + 11) = 0;
    *((_DWORD *)v57 + 12) = 0;
    *((_DWORD *)v57 + 13) = 0;
    *((_DWORD *)v57 + 14) = 0;
    v69 = (int)v57;
    *((_BYTE *)v57 + 82) = 0;
    v58 = sub_6F961B60(0x14u);
    v58[1] = 0;
    *v58 = off_6FBAFB80;
    v63 = v58;
    v58[2] = v69;
    v73 = 16;
    v70 = v58;
    sub_6F9393B0((int)v58, 0, 0);
    v59 = (int)v70;
    v60 = (int)v71;
    v70[3] = v71;
    _InterlockedAdd((volatile signed __int32 *)(v60 + 4), 1u);
    v61 = v69;
    *(_DWORD *)v59 = off_6FBAF9FC;
    *(_DWORD *)(v59 + 16) = v61;
    LOBYTE(v62) = 0;
    v73 = 15;
    sub_6F914080(v62, v60, v61);
  }
  else
  {
    if ( a2 != &unk_6FB49F7C )
    {
      v73 = -1;
      sub_6F95AFD0("cannot create shim for unknown locale::facet");
    }
    v73 = -1;
    v4 = sub_6F961B60(0x14u);
    v73 = 2;
    v70 = v4;
    sub_6F952BD0(v4, 0);
    v5 = v70;
    v6 = v71;
    v70[4] = v71;
    _InterlockedAdd((volatile signed __int32 *)v6 + 1, 1u);
    *v5 = off_6FBAF6FC;
  }
  sub_6F8A1AD0((int *)&v72);
  return v70;
}
