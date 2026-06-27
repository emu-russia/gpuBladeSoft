int __usercall sub_6F81A820@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  signed int v5; // ebp@1
  int v6; // ebx@5
  bool v7; // zf@5
  signed int v8; // eax@6
  int v9; // esi@6
  int v10; // edx@6
  int v11; // ebp@6
  int v12; // edx@6
  int v13; // ecx@6
  int v14; // ebp@6
  int v15; // ebx@6
  int v16; // edi@6
  int v17; // esi@6
  signed int v18; // edx@6
  signed int v19; // ebx@6
  int v20; // edx@6
  int v21; // ecx@7
  int v22; // ecx@7
  int v23; // esi@7
  int v24; // eax@7
  int v25; // esi@7
  int v26; // ebx@7
  int v27; // edi@7
  int v28; // edx@7
  unsigned int v29; // eax@7
  int v30; // edi@10
  int v31; // ecx@10
  int v32; // eax@10
  int v33; // ebx@10
  int v34; // ebp@10
  unsigned int v35; // eax@10
  int v36; // edx@10
  unsigned int v37; // edi@10
  unsigned int v38; // ebx@10
  int v39; // ebp@12
  unsigned int v40; // ebp@13
  int result; // eax@18
  signed int v42; // [sp+0h] [bp-58h]@3
  unsigned int v43; // [sp+4h] [bp-54h]@1
  unsigned int v44; // [sp+8h] [bp-50h]@1
  int v45; // [sp+Ch] [bp-4Ch]@1
  unsigned int v46; // [sp+10h] [bp-48h]@6
  int v47; // [sp+14h] [bp-44h]@4
  char v48; // [sp+18h] [bp-40h]@4
  int v49; // [sp+1Ch] [bp-3Ch]@7
  int v50; // [sp+20h] [bp-38h]@1
  int v51; // [sp+24h] [bp-34h]@1
  unsigned int v52; // [sp+28h] [bp-30h]@6
  signed int v53; // [sp+2Ch] [bp-2Ch]@1
  int v54; // [sp+30h] [bp-28h]@7
  int v55; // [sp+34h] [bp-24h]@1
  int v56; // [sp+38h] [bp-20h]@1
  int v57; // [sp+40h] [bp-18h]@1
  signed int v58; // [sp+44h] [bp-14h]@1

  v50 = a1;
  v57 = a3;
  v56 = a2;
  v43 = *(_DWORD *)(a2 + 8);
  v5 = 4;
  v45 = *(_DWORD *)(a1 + 53164);
  v53 = *(_BYTE *)(a1 + 794);
  v44 = *(_DWORD *)(a2 + 4);
  v58 = 1;
  v51 = 24 * a5;
  v55 = (((unsigned __int8)byte_6FB8E860[*(_DWORD *)(a1 + 48)] - 4) >> 1) + 4;
  while ( 1 )
  {
    if ( v55 > v5 )
    {
      v42 = v5;
      do
      {
        v48 = 0;
        v8 = *(_DWORD *)(v57 + 4 * v42);
        v9 = 4 * v8 >> 9;
        v10 = v9 < 22;
        LOBYTE(v10) = v9 > 22;
        v11 = 48 * v58 + v51 + 144 * *(_BYTE *)(v50 + 795);
        v12 = v9 + ((22 - v9) & -v10);
        v13 = v11 + v12;
        v14 = v12 + v11 + 1;
        v15 = 4 * v8 - (v12 << 9);
        v16 = word_6FB8EC42[2 * v13];
        v17 = word_6FB8EC40[2 * v13];
        v18 = v15 * (word_6FB8EC42[2 * v14] - v16);
        v19 = (word_6FB8EC40[2 * v14] - v17) * v15;
        v20 = (~(v16 + (v18 >> 9)) >> 31) & (v16 + (v18 >> 9));
        v47 = ((~((v19 >> 9) + v17) >> 31) & ((v19 >> 9) + v17)) + 51;
        v52 = (unsigned int)(v20 * v20) >> 4;
        v46 = v45 * ((v47 + v43) >> 6)
            + ((v52 + v44) >> 6)
            + (((((_BYTE)v52 + (_BYTE)v44) & 0x3F) + v45 * (((_BYTE)v47 + (_BYTE)v43) & 0x3Fu) + 32) >> 6);
        if ( v53 > 1 )
        {
          v21 = v8 >> 9 < 22;
          LOBYTE(v21) = v8 >> 9 > 22;
          v22 = (v8 >> 9) + ((22 - (v8 >> 9)) & -v21);
          v54 = v22 + 1;
          v49 = v8 - (v22 << 9);
          v23 = v51 + 144 * *(_BYTE *)(v50 + 796);
          v24 = v23 + v22;
          v25 = v22 + 1 + v23;
          v26 = word_6FB8EC42[2 * v24] + (v49 * (word_6FB8EC42[2 * v25] - word_6FB8EC42[2 * v24]) >> 9);
          v27 = (v49 * (word_6FB8EC40[2 * v25] - word_6FB8EC40[2 * v24]) >> 9) + word_6FB8EC40[2 * v24];
          v28 = ((~v27 >> 31) & v27) + 51;
          v29 = ((~v26 >> 31) & v26) * ((~v26 >> 31) & (unsigned int)v26) >> 4;
          if ( v46 > ((((v29 + v44) & 0x3F) + v45 * ((v28 + v43) & 0x3F) + 32) >> 6)
                   + ((v29 + v44) >> 6)
                   + v45 * ((v28 + v43) >> 6) )
          {
            v52 = ((~v26 >> 31) & v26) * ((~v26 >> 31) & (unsigned int)v26) >> 4;
            v46 = ((((v29 + v44) & 0x3F) + v45 * ((v28 + v43) & 0x3F) + 32) >> 6)
                + ((v29 + v44) >> 6)
                + v45 * ((v28 + v43) >> 6);
            v47 = ((~v27 >> 31) & v27) + 51;
            v48 = 1;
          }
          if ( v53 != 2 )
          {
            v30 = v51 + 144 * *(_BYTE *)(v50 + 797);
            v31 = v30 + v22;
            v32 = word_6FB8EC42[2 * (v30 + v54)];
            v33 = (v49 * (word_6FB8EC40[2 * (v30 + v54)] - word_6FB8EC40[2 * v31]) >> 9) + word_6FB8EC40[2 * v31];
            v34 = (~((v49 * (v32 - word_6FB8EC42[2 * v31]) >> 9) + word_6FB8EC42[2 * v31]) >> 31) & ((v49 * (v32 - word_6FB8EC42[2 * v31]) >> 9) + word_6FB8EC42[2 * v31]);
            v35 = (unsigned int)(v34 * v34) >> 4;
            v36 = ((~v33 >> 31) & v33) + 51;
            v37 = v45 * ((v36 + v43) >> 6);
            v38 = (((v35 + v44) & 0x3F) + v45 * ((v36 + v43) & 0x3F) + 32) >> 6;
            if ( v46 > v38 + v37 + ((v35 + v44) >> 6) )
            {
              v52 = (unsigned int)(v34 * v34) >> 4;
              v46 = v38 + v37 + ((v35 + v44) >> 6);
              v47 = v36;
              v48 = 2;
            }
          }
        }
        v39 = *(_DWORD *)(a4 + 4 * v42);
        if ( v39 != -1
          && (v40 = v44 + (v39 << 6),
              ((v45 * (v43 & 0x3F) + (v40 & 0x3F) + 32) >> 6) + (v40 >> 6) + v45 * (v43 >> 6) <= v46) )
        {
          v48 += 4;
          v44 = v40;
          v47 = 0;
        }
        else
        {
          v44 += v52;
        }
        v43 += v47;
        v6 = v42 + 1;
        v7 = v42 + 1 == v55;
        *(_BYTE *)(v56 + v42++ + 16) = v48;
      }
      while ( !v7 );
      v5 = v6;
    }
    v55 = 2 * v55 - 4;
    if ( v58 == 2 )
      break;
    v58 = 2;
  }
  result = v56;
  *(_DWORD *)(v56 + 4) = v44;
  *(_DWORD *)(v56 + 8) = v43;
  return result;
}
