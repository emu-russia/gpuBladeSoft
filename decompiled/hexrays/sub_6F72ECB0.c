int __fastcall sub_6F72ECB0(int a1, int a2, float a3)
{
  int v3; // ebx@1
  long double v4; // st7@1
  long double v5; // st6@1
  long double v6; // st7@1
  int v7; // ecx@1
  int v8; // eax@1
  int v9; // edx@1
  int v10; // ecx@1
  int v11; // eax@1
  int v12; // edx@1
  int v13; // ecx@1
  int v14; // eax@1
  int v15; // edx@1
  int v16; // ecx@1
  int v17; // eax@1
  int v18; // edx@1
  int v19; // ecx@1
  int result; // eax@1
  int v21; // edx@1
  float v22; // [sp+10h] [bp-8Ch]@1
  float v23; // [sp+14h] [bp-88h]@1
  float v24; // [sp+18h] [bp-84h]@1
  float v25; // [sp+1Ch] [bp-80h]@1
  float v26; // [sp+20h] [bp-7Ch]@1
  float v27; // [sp+24h] [bp-78h]@1
  float v28; // [sp+28h] [bp-74h]@1
  float v29; // [sp+2Ch] [bp-70h]@1
  float v30; // [sp+30h] [bp-6Ch]@1
  float v31; // [sp+34h] [bp-68h]@1
  float v32; // [sp+38h] [bp-64h]@1
  float v33; // [sp+3Ch] [bp-60h]@1
  float v34; // [sp+40h] [bp-5Ch]@1
  float v35; // [sp+44h] [bp-58h]@1
  float v36; // [sp+48h] [bp-54h]@1
  float v37; // [sp+4Ch] [bp-50h]@1
  int v38; // [sp+50h] [bp-4Ch]@1
  int v39; // [sp+54h] [bp-48h]@1
  int v40; // [sp+58h] [bp-44h]@1
  int v41; // [sp+5Ch] [bp-40h]@1
  int v42; // [sp+60h] [bp-3Ch]@1
  int v43; // [sp+64h] [bp-38h]@1
  int v44; // [sp+68h] [bp-34h]@1
  int v45; // [sp+6Ch] [bp-30h]@1
  int v46; // [sp+70h] [bp-2Ch]@1
  int v47; // [sp+74h] [bp-28h]@1
  int v48; // [sp+78h] [bp-24h]@1
  int v49; // [sp+7Ch] [bp-20h]@1
  int v50; // [sp+80h] [bp-1Ch]@1
  int v51; // [sp+84h] [bp-18h]@1
  int v52; // [sp+88h] [bp-14h]@1
  int v53; // [sp+8Ch] [bp-10h]@1

  v3 = a1;
  v4 = 0.0174532925199433 * a3;
  v5 = cos(v4);
  v6 = sin(v4);
  v22 = v5;
  v23 = v6;
  v24 = 0.0;
  v25 = 0.0;
  v26 = -v6;
  v27 = v5;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 1.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = 0.0;
  v37 = 1.0;
  sub_6F6841C0((int)&v38, a2, a1, (int)&v22);
  v7 = v39;
  v8 = v40;
  *(_DWORD *)v3 = v38;
  v9 = v41;
  *(_DWORD *)(v3 + 4) = v7;
  v10 = v42;
  *(_DWORD *)(v3 + 8) = v8;
  v11 = v43;
  *(_DWORD *)(v3 + 12) = v9;
  v12 = v44;
  *(_DWORD *)(v3 + 16) = v10;
  v13 = v45;
  *(_DWORD *)(v3 + 20) = v11;
  v14 = v46;
  *(_DWORD *)(v3 + 24) = v12;
  v15 = v47;
  *(_DWORD *)(v3 + 28) = v13;
  v16 = v48;
  *(_DWORD *)(v3 + 32) = v14;
  v17 = v49;
  *(_DWORD *)(v3 + 36) = v15;
  v18 = v50;
  *(_DWORD *)(v3 + 40) = v16;
  v19 = v51;
  *(_DWORD *)(v3 + 44) = v17;
  result = v52;
  *(_DWORD *)(v3 + 48) = v18;
  v21 = v53;
  *(_DWORD *)(v3 + 52) = v19;
  *(_DWORD *)(v3 + 56) = result;
  *(_DWORD *)(v3 + 60) = v21;
  return result;
}
