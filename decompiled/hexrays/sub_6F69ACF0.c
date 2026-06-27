signed int __usercall sub_6F69ACF0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5, unsigned __int16 a6, unsigned __int16 a7, const char **a8)
{
  int v8; // ebp@1
  int v9; // edi@1
  int v10; // esi@1
  FILE *v11; // eax@1
  FILE *v12; // ebx@2
  signed int result; // eax@4
  int v14; // eax@7
  int v15; // ST00_4@7
  int v16; // esi@7
  int v17; // edx@8
  unsigned __int16 v18; // cx@9
  unsigned __int16 v19; // ax@9
  signed int v20; // ebp@11
  signed int v21; // ecx@12
  signed int v22; // ebp@13
  int v23; // eax@16
  int v24; // ST00_4@16
  int v25; // esi@16
  int v26; // ecx@17
  unsigned __int16 v27; // dx@18
  unsigned __int16 v28; // ax@19
  signed int v29; // ebp@21
  signed int v30; // edx@22
  signed int v31; // ebp@23
  unsigned __int16 v32; // bp@26
  unsigned __int16 v33; // ax@27
  signed int v34; // ebp@29
  int v35; // eax@30
  signed int v36; // ecx@31
  const char *v37; // ST08_4@41
  int v38; // [sp+1Ch] [bp-50h]@7
  signed int v39; // [sp+1Ch] [bp-50h]@9
  int v40; // [sp+1Ch] [bp-50h]@16
  signed int v41; // [sp+1Ch] [bp-50h]@19
  signed int v42; // [sp+1Ch] [bp-50h]@27
  unsigned __int16 v43; // [sp+2Eh] [bp-3Eh]@2
  unsigned __int16 v44; // [sp+30h] [bp-3Ch]@2
  __int16 v45; // [sp+32h] [bp-3Ah]@2
  __int16 v46; // [sp+34h] [bp-38h]@2
  __int16 v47; // [sp+36h] [bp-36h]@7
  __int16 v48; // [sp+38h] [bp-34h]@7
  __int16 v49; // [sp+3Ah] [bp-32h]@2
  __int16 v50; // [sp+3Ch] [bp-30h]@2
  __int16 v51; // [sp+3Eh] [bp-2Eh]@9
  int v52; // [sp+40h] [bp-2Ch]@7
  int v53; // [sp+44h] [bp-28h]@7
  int v54; // [sp+48h] [bp-24h]@2
  int v55; // [sp+4Ch] [bp-20h]@2

  v8 = a1;
  v9 = a3;
  v10 = a2;
  v11 = fopen(*a8, "wb+");
  if ( v11 )
  {
    v12 = v11;
    v50 = v10;
    v54 = 0;
    v46 = a4;
    v55 = 0;
    LOBYTE(v54) = 16;
    v49 = v9;
    v45 = a5;
    v44 = a6;
    v43 = a7;
    switch ( v8 )
    {
      case 3:
        LOBYTE(v55) = 3;
        nullsub_10();
        break;
      case 4:
        LOBYTE(v55) = 4;
        nullsub_10();
        break;
      case 0:
        LOBYTE(v55) = 8;
        fwrite(&v54, 8u, 1u, v11);
        v47 = 1;
        v48 = 16;
        v53 = 44;
        fwrite(&v53, 4u, 1u, v12);
        fwrite(&v50, 2u, 1u, v12);
        fwrite(&v49, 2u, 1u, v12);
        fwrite(&v48, 2u, 1u, v12);
        fwrite(&v47, 2u, 1u, v12);
        v14 = v10 + 16;
        v15 = v10;
        v16 = v10 + 1;
        v38 = v14;
        LOWORD(v52) = dword_6FBB51E4(v15, v9);
        fwrite(&v52, 2u, 1u, v12);
        do
        {
          LOWORD(v52) = dword_6FBB51E4(v16, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v16 + 1, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v16 + 2, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v16 + 3, v9);
          fwrite(&v52, 2u, 1u, v12);
          v17 = v16 + 4;
          v16 += 5;
          LOWORD(v52) = dword_6FBB51E4(v17, v9);
          fwrite(&v52, 2u, 1u, v12);
        }
        while ( v38 != v16 );
        v52 = (v43 * v44 >> 1) + 12;
        fwrite(&v52, 4u, 1u, v12);
        fwrite(&v46, 2u, 1u, v12);
        fwrite(&v45, 2u, 1u, v12);
        v51 = v44 >> 2;
        fwrite(&v51, 2u, 1u, v12);
        fwrite(&v43, 2u, 1u, v12);
        v18 = v43;
        v19 = v44;
        v39 = 0;
        if ( v43 )
        {
          while ( 1 )
          {
            if ( v19 )
            {
              v20 = 0;
              do
              {
                v21 = v20;
                v20 += 4;
                v51 = dword_6FBB51E4(a4 + (v21 >> 2), a5 + v39);
                fwrite(&v51, 2u, 1u, v12);
                v19 = v44;
              }
              while ( v44 > v20 );
              v22 = v43;
              v18 = v43;
            }
            else
            {
              ++v39;
              v22 = v18;
              if ( v39 >= v18 )
                goto LABEL_4;
            }
            if ( v22 <= ++v39 )
              goto LABEL_4;
          }
        }
        break;
      case 1:
        LOBYTE(v55) = 9;
        fwrite(&v54, 8u, 1u, v11);
        v48 = 256;
        v47 = 1;
        v53 = 524;
        fwrite(&v53, 4u, 1u, v12);
        fwrite(&v50, 2u, 1u, v12);
        fwrite(&v49, 2u, 1u, v12);
        fwrite(&v48, 2u, 1u, v12);
        fwrite(&v47, 2u, 1u, v12);
        v23 = v10 + 256;
        v24 = v10;
        v25 = v10 + 1;
        v40 = v23;
        LOWORD(v52) = dword_6FBB51E4(v24, v9);
        fwrite(&v52, 2u, 1u, v12);
        do
        {
          LOWORD(v52) = dword_6FBB51E4(v25, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v25 + 1, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v25 + 2, v9);
          fwrite(&v52, 2u, 1u, v12);
          LOWORD(v52) = dword_6FBB51E4(v25 + 3, v9);
          fwrite(&v52, 2u, 1u, v12);
          v26 = v25 + 4;
          v25 += 5;
          LOWORD(v52) = dword_6FBB51E4(v26, v9);
          fwrite(&v52, 2u, 1u, v12);
        }
        while ( v40 != v25 );
        v52 = v43 * v44 + 12;
        fwrite(&v52, 4u, 1u, v12);
        fwrite(&v46, 2u, 1u, v12);
        fwrite(&v45, 2u, 1u, v12);
        v51 = v44 >> 1;
        fwrite(&v51, 2u, 1u, v12);
        fwrite(&v43, 2u, 1u, v12);
        v27 = v43;
        if ( v43 )
        {
          v41 = 0;
          v28 = v44;
          while ( 1 )
          {
            if ( v28 )
            {
              v29 = 0;
              do
              {
                v30 = v29;
                v29 += 2;
                v51 = dword_6FBB51E4(a4 + (v30 >> 1), a5 + v41);
                fwrite(&v51, 2u, 1u, v12);
                v28 = v44;
              }
              while ( v44 > v29 );
              v31 = v43;
              v27 = v43;
            }
            else
            {
              ++v41;
              v31 = v27;
              if ( v41 >= v27 )
                goto LABEL_4;
            }
            if ( v31 <= ++v41 )
              goto LABEL_4;
          }
        }
        break;
      case 2:
        LOBYTE(v55) = 2;
        fwrite(&v54, 8u, 1u, v11);
        v52 = 2 * v43 * v44 + 12;
        fwrite(&v52, 4u, 1u, v12);
        fwrite(&v46, 2u, 1u, v12);
        fwrite(&v45, 2u, 1u, v12);
        fwrite(&v44, 2u, 1u, v12);
        fwrite(&v43, 2u, 1u, v12);
        v32 = v43;
        if ( v43 )
        {
          v42 = 0;
          v33 = v44;
          while ( 1 )
          {
            if ( v33 )
            {
              v34 = 0;
              do
              {
                v35 = v34++ + a4;
                LOWORD(v53) = dword_6FBB51E4(v35, a5 + v42);
                fwrite(&v53, 2u, 1u, v12);
                v33 = v44;
              }
              while ( v44 > v34 );
              v36 = v43;
              v32 = v43;
            }
            else
            {
              ++v42;
              v36 = v32;
              if ( v32 <= v42 )
                goto LABEL_4;
            }
            if ( v36 <= ++v42 )
              goto LABEL_4;
          }
        }
        break;
      default:
        nullsub_10();
        break;
    }
LABEL_4:
    fclose(v12);
    result = 0;
  }
  else
  {
    v37 = *a8;
    nullsub_10();
    result = -1;
  }
  return result;
}
