int __fastcall sub_6F684460(int a1, int a2, float a3, float a4)
{
  int v4; // ebx@1
  int v5; // ecx@1
  int v6; // eax@1
  int v7; // edx@1
  int v8; // ecx@1
  int v9; // eax@1
  int v10; // edx@1
  int v11; // ecx@1
  int v12; // eax@1
  int v13; // edx@1
  int v14; // ecx@1
  int v15; // eax@1
  int v16; // edx@1
  int v17; // ecx@1
  int result; // eax@1
  int v19; // edx@1
  float v20; // [sp+8h] [bp-84h]@1
  float v21; // [sp+Ch] [bp-80h]@1
  float v22; // [sp+10h] [bp-7Ch]@1
  float v23; // [sp+14h] [bp-78h]@1
  float v24; // [sp+18h] [bp-74h]@1
  float v25; // [sp+1Ch] [bp-70h]@1
  float v26; // [sp+20h] [bp-6Ch]@1
  float v27; // [sp+24h] [bp-68h]@1
  float v28; // [sp+28h] [bp-64h]@1
  float v29; // [sp+2Ch] [bp-60h]@1
  float v30; // [sp+30h] [bp-5Ch]@1
  float v31; // [sp+34h] [bp-58h]@1
  float v32; // [sp+38h] [bp-54h]@1
  float v33; // [sp+3Ch] [bp-50h]@1
  float v34; // [sp+40h] [bp-4Ch]@1
  int v35; // [sp+44h] [bp-48h]@1
  int v36; // [sp+48h] [bp-44h]@1
  int v37; // [sp+4Ch] [bp-40h]@1
  int v38; // [sp+50h] [bp-3Ch]@1
  int v39; // [sp+54h] [bp-38h]@1
  int v40; // [sp+58h] [bp-34h]@1
  int v41; // [sp+5Ch] [bp-30h]@1
  int v42; // [sp+60h] [bp-2Ch]@1
  int v43; // [sp+64h] [bp-28h]@1
  int v44; // [sp+68h] [bp-24h]@1
  int v45; // [sp+6Ch] [bp-20h]@1
  int v46; // [sp+70h] [bp-1Ch]@1
  int v47; // [sp+74h] [bp-18h]@1
  int v48; // [sp+78h] [bp-14h]@1
  int v49; // [sp+7Ch] [bp-10h]@1
  int v50; // [sp+80h] [bp-Ch]@1
  int v51; // [sp+84h] [bp-8h]@1

  v4 = a1;
  v35 = 1065353216;
  v20 = a3;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = a4;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  sub_6F6841C0((int)&v36, a2, a1, (int)&v20);
  v5 = v37;
  v6 = v38;
  *(_DWORD *)v4 = v36;
  v7 = v39;
  *(_DWORD *)(v4 + 4) = v5;
  v8 = v40;
  *(_DWORD *)(v4 + 8) = v6;
  v9 = v41;
  *(_DWORD *)(v4 + 12) = v7;
  v10 = v42;
  *(_DWORD *)(v4 + 16) = v8;
  v11 = v43;
  *(_DWORD *)(v4 + 20) = v9;
  v12 = v44;
  *(_DWORD *)(v4 + 24) = v10;
  v13 = v45;
  *(_DWORD *)(v4 + 28) = v11;
  v14 = v46;
  *(_DWORD *)(v4 + 32) = v12;
  v15 = v47;
  *(_DWORD *)(v4 + 36) = v13;
  v16 = v48;
  *(_DWORD *)(v4 + 40) = v14;
  v17 = v49;
  *(_DWORD *)(v4 + 44) = v15;
  result = v50;
  *(_DWORD *)(v4 + 48) = v16;
  v19 = v51;
  *(_DWORD *)(v4 + 52) = v17;
  *(_DWORD *)(v4 + 56) = result;
  *(_DWORD *)(v4 + 60) = v19;
  return result;
}
