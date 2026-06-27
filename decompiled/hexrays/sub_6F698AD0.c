int sub_6F698AD0()
{
  int *v0; // ebx@2
  int v1; // edi@10
  const char *v2; // edi@22
  int v3; // eax@36
  int v4; // edi@41
  int v5; // eax@45
  bool v6; // cf@45
  bool v7; // zf@45
  char *v8; // esi@46
  const char *v9; // edi@46
  signed int v10; // ecx@46
  int v11; // eax@51
  bool v12; // cf@51
  bool v13; // zf@51
  char *v14; // esi@52
  const char *v15; // edi@52
  signed int v16; // ecx@52
  int v17; // eax@56
  bool v18; // cf@56
  bool v19; // zf@56
  char *v20; // esi@57
  const char *v21; // edi@57
  signed int v22; // ecx@57
  int v23; // ecx@62
  int v24; // esi@66
  int v25; // edi@70
  int v26; // edx@74
  int v27; // eax@78
  int v28; // ecx@82
  int v29; // esi@86
  double v30; // st7@92
  double v31; // st7@96
  double v32; // st7@100
  double v33; // st7@104
  double v34; // st7@108
  double v35; // st7@112
  double v36; // st7@116
  double v37; // st7@120
  const char *v38; // ecx@123
  const char *v39; // ecx@127
  double v40; // st7@132
  double v41; // st7@136
  int v42; // ecx@141
  int v43; // eax@150
  int v44; // ecx@155
  int v45; // eax@160
  int v46; // ecx@165
  int v47; // eax@170
  const char *v48; // eax@175
  int v50; // eax@216
  int v51; // eax@217
  signed int v52; // eax@219
  const char *v53; // edi@222
  int v54; // esi@229
  const char *v55; // edx@231
  signed int v56; // eax@234
  int v57; // esi@4
  const char *v58; // ecx@270
  const char *v59; // edi@273
  const char *v60; // esi@276
  const char *v61; // esi@279
  int v62; // [sp+1Ch] [bp-20h]@225

  nullsub_10();
  if ( sub_6F7604A0(0, &dword_6FD400CC) )
  {
    v0 = &dword_6FBB52C0;
    do
    {
      if ( dword_6FCFFF68(v0 + 2228, 1) )
      {
        v57 = dword_6FBB52C0;
        dword_6FBB52C0 = 0;
        sub_6F6961A0();
        dword_6FBB52C0 = v57;
        sub_6F6976C0((int)&dword_6FBB5300);
      }
      if ( dword_6FCFFF68(v0 + 2244, 1) )
        dword_6FBB84D0 = dword_6FBB84D0 == 0;
      if ( dword_6FCFFF68(v0 + 2260, 1) )
        dword_6FBB84D4 = dword_6FBB84D4 == 0;
      if ( dword_6FCFFF68(v0 + 2276, 1) )
      {
        v1 = dword_6FBB52EC + 1;
        if ( dword_6FBB52EC + 1 > 2 )
          v1 = 0;
        dword_6FBB52EC = v1;
        if ( !byte_6FD40E08 && sub_6F9624B0((int)&byte_6FD40E08) )
        {
          sub_6F695280(dword_6FD40DC0, "Disabled");
          sub_6F695280(&unk_6FD40DD8, "Auto-detection");
          sub_6F695280(&unk_6FD40DF0, "Manual");
          sub_6F962670((int)&byte_6FD40E08);
          sub_6F6813F0((int)sub_6F693F40);
        }
        sub_6F72F480("Fps limitation changed to \"%s\"", dword_6FD40DC0[6 * dword_6FBB52EC]);
      }
      if ( dword_6FCFFF64(v0 + 2292, 1) )
        dword_6FBB9780 = 1;
      if ( dword_6FCFFF60(v0 + 2292, 1) )
      {
        sub_6F695FF0(dword_6FBB52E4);
        dword_6FBB9780 = 0;
      }
      if ( dword_6FCFFF68(v0 + 2308, 1) )
      {
        dword_6FBB52C0 = dword_6FBB52C0 == 0;
        sub_6F6961A0();
      }
      if ( dword_6FCFFF68(v0 + 2324, 1) )
      {
        v54 = dword_6FBB8524;
        dword_6FBB8524 ^= 1u;
        if ( v54 == 1 )
          ShowCursor(1);
        else
          ShowCursor(0);
        v55 = "showed";
        if ( dword_6FBB8524 )
          v55 = "hidden";
        sub_6F72F480("Cursor was %s", v55);
      }
      if ( dword_6FCFFF68(v0 + 2340, 1) )
      {
        v2 = "enabled";
        if ( dword_6FBB5518 == 1 )
          v2 = "disabled";
        dword_6FBB5518 ^= 1u;
        sub_6F72F480("Screen bilinear filtering: %s", v2);
      }
      if ( dword_6FCFFF68(v0 + 2356, 1) )
        sub_6F72F480("Not implemented");
      if ( dword_6FCFFF68(v0 + 2372, 1) )
        sub_6F72F480("Not implemented");
      if ( dword_6FCFFF68(v0 + 2388, 1) )
        sub_6F72F480("Not implemented");
      if ( dword_6FCFFF68(v0 + 2404, 1) )
        sub_6F72F480("Not implemented");
      if ( dword_6FCFFF68(v0 + 2420, 1) )
        sub_6F72F480("Not implemented");
      if ( dword_6FCFFF68(v0 + 2436, 1) )
      {
        v3 = dword_6FBB5300 + 1;
        if ( dword_6FBB5300 + 1 > 2 )
          v3 = 0;
        dword_6FBB5300 = v3;
        if ( !byte_6FD40DA8 && sub_6F9624B0((int)&byte_6FD40DA8) )
        {
          sub_6F695280(dword_6FD40D60, "None");
          sub_6F695280(&unk_6FD40D78, "PSX");
          sub_6F695280(&unk_6FD40D90, "Improved");
          sub_6F962670((int)&byte_6FD40DA8);
          sub_6F6813F0((int)sub_6F693F80);
        }
        sub_6F72F480("Dithering method changed to \"%s\"", dword_6FD40D60[6 * dword_6FBB5300]);
      }
      if ( dword_6FCFFF68(v0 + 2452, 1) )
      {
        v4 = dword_6FBB7560 + 1;
        if ( dword_6FBB7560 + 1 > 6 )
          v4 = 0;
        dword_6FBB7560 = v4;
        if ( !byte_6FD40D48 && sub_6F9624B0((int)&byte_6FD40D48) )
        {
          sub_6F695280(dword_6FD40CA0, "Perfect");
          sub_6F695280(&unk_6FD40CB8, "Standard");
          sub_6F695280(&unk_6FD40CD0, "Custom");
          sub_6F695280(&unk_6FD40CE8, "Full VRAM (4-bit)");
          sub_6F695280(&unk_6FD40D00, "Full VRAM (8-bit)");
          sub_6F695280(&unk_6FD40D18, "Full VRAM (15-bit)");
          sub_6F695280(dword_6FD40D30, "Full VRAM (24-bit)");
          sub_6F962670((int)&byte_6FD40D48);
          sub_6F6813F0((int)sub_6F693FC0);
        }
        sub_6F72F480("Visible area mode changed to \"%s\"", dword_6FD40CA0[6 * dword_6FBB7560]);
      }
      v5 = dword_6FCFFF68(v0 + 2468, 1);
      v6 = 0;
      v7 = v5 == 0;
      if ( v5 )
      {
        v8 = &byte_6FBB5414;
        v9 = "Disabled";
        v10 = 9;
        do
        {
          if ( !v10 )
            break;
          v6 = (unsigned __int8)*v8 < *v9;
          v7 = *v8++ == *v9++;
          --v10;
        }
        while ( v7 );
        if ( (!v6 && !v7) != v6 )
        {
          v53 = "enabled";
          if ( dword_6FBB5410 == 1 )
            v53 = "disabled";
          dword_6FBB5410 ^= 1u;
          sub_6F72F480("Shader state: %s", v53);
        }
      }
      if ( dword_6FCFFF68(v0 + 2484, 1) )
      {
        v56 = dword_6FBBDB50;
        if ( dword_6FBBDB50 > 0 )
        {
          if ( dword_6FBBDADC )
          {
            glDeleteTextures(1, (int)dword_6FBBDAD8);
            v56 = dword_6FBBDB50;
            dword_6FBBDAD0[0] = 0;
            dword_6FBBDAD4 = 0;
            dword_6FBBDAD8[0] = 0;
            dword_6FBBDADC = 0;
          }
          if ( v56 > 1 )
          {
            if ( dword_6FBBDAEC )
            {
              glDeleteTextures(1, (int)&dword_6FBBDAE8);
              v56 = dword_6FBBDB50;
              dword_6FBBDAE0 = 0;
              dword_6FBBDAE4 = 0;
              dword_6FBBDAE8 = 0;
              dword_6FBBDAEC = 0;
            }
            if ( v56 > 2 )
            {
              if ( dword_6FBBDAFC )
              {
                glDeleteTextures(1, (int)&dword_6FBBDAF8);
                v56 = dword_6FBBDB50;
                dword_6FBBDAF0 = 0;
                dword_6FBBDAF4 = 0;
                dword_6FBBDAF8 = 0;
                dword_6FBBDAFC = 0;
              }
              if ( v56 > 3 )
              {
                if ( dword_6FBBDB0C )
                {
                  glDeleteTextures(1, (int)&dword_6FBBDB08);
                  v56 = dword_6FBBDB50;
                  dword_6FBBDB00 = 0;
                  dword_6FBBDB04 = 0;
                  dword_6FBBDB08 = 0;
                  dword_6FBBDB0C = 0;
                }
                if ( v56 > 4 )
                {
                  if ( dword_6FBBDB1C )
                  {
                    glDeleteTextures(1, (int)&dword_6FBBDB18);
                    v56 = dword_6FBBDB50;
                    dword_6FBBDB10 = 0;
                    dword_6FBBDB14 = 0;
                    dword_6FBBDB18 = 0;
                    dword_6FBBDB1C = 0;
                  }
                  if ( v56 > 5 )
                  {
                    if ( dword_6FBBDB2C )
                    {
                      glDeleteTextures(1, (int)&dword_6FBBDB28);
                      v56 = dword_6FBBDB50;
                      dword_6FBBDB20 = 0;
                      dword_6FBBDB24 = 0;
                      dword_6FBBDB28 = 0;
                      dword_6FBBDB2C = 0;
                    }
                    if ( v56 > 6 )
                    {
                      if ( dword_6FBBDB3C )
                      {
                        glDeleteTextures(1, (int)&dword_6FBBDB38);
                        v56 = dword_6FBBDB50;
                        dword_6FBBDB30 = 0;
                        dword_6FBBDB34 = 0;
                        dword_6FBBDB38 = 0;
                        dword_6FBBDB3C = 0;
                      }
                      if ( v56 > 7 && dword_6FBBDB4C )
                      {
                        glDeleteTextures(1, (int)&dword_6FBBDB48);
                        dword_6FBBDB40 = 0;
                        dword_6FBBDB44 = 0;
                        dword_6FBBDB48 = 0;
                        dword_6FBBDB4C = 0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        dword_6FBBDB50 = 0;
        dword_6FBBDB54 = 0;
        sub_6F6930C0();
        sub_6F72F480("Shader is reloaded");
      }
      v11 = dword_6FCFFF68(v0 + 2500, 1);
      v12 = 0;
      v13 = v11 == 0;
      if ( v11 )
      {
        v14 = &byte_6FBB5414;
        v15 = "Disabled";
        v16 = 9;
        do
        {
          if ( !v16 )
            break;
          v12 = (unsigned __int8)*v14 < *v15;
          v13 = *v14++ == *v15++;
          --v16;
        }
        while ( v13 );
        if ( (!v12 && !v13) != v12 )
        {
          v52 = dword_6FBB5514;
          if ( dword_6FBB5514 - 1 < 0 )
          {
            dword_6FBB5514 = 0;
            v52 = 1;
          }
          else
          {
            --dword_6FBB5514;
          }
          sub_6F72F480("Shader level: %i", v52);
        }
      }
      v17 = dword_6FCFFF68(v0 + 2516, 1);
      v18 = 0;
      v19 = v17 == 0;
      if ( v17 )
      {
        v20 = &byte_6FBB5414;
        v21 = "Disabled";
        v22 = 9;
        do
        {
          if ( !v22 )
            break;
          v18 = (unsigned __int8)*v20 < *v21;
          v19 = *v20++ == *v21++;
          --v22;
        }
        while ( v19 );
        if ( (!v18 && !v19) != v18 )
        {
          v50 = dword_6FBB5514;
          if ( dword_6FBB5514 + 1 > 3 )
          {
            dword_6FBB5514 = 3;
            v51 = 4;
          }
          else
          {
            ++dword_6FBB5514;
            v51 = v50 + 2;
          }
          sub_6F72F480("Shader level: %i", v51);
        }
      }
      if ( dword_6FCFFF68(v0 + 2532, 1) )
      {
        v23 = dword_6FBB551C - 5;
        if ( dword_6FBB551C - 5 < -100 )
        {
          dword_6FBB551C = -100;
          v23 = -100;
        }
        else
        {
          dword_6FBB551C -= 5;
        }
        sub_6F72F480("Brightness: %i", v23);
      }
      if ( dword_6FCFFF68(v0 + 2548, 1) )
      {
        v24 = dword_6FBB551C + 5;
        if ( dword_6FBB551C + 5 > 100 )
        {
          dword_6FBB551C = 100;
          v24 = 100;
        }
        else
        {
          dword_6FBB551C += 5;
        }
        sub_6F72F480("Brightness: %i", v24);
      }
      if ( dword_6FCFFF68(v0 + 2564, 1) )
      {
        v25 = dword_6FBB5520 - 5;
        if ( dword_6FBB5520 - 5 < -100 )
        {
          dword_6FBB5520 = -100;
          v25 = -100;
        }
        else
        {
          dword_6FBB5520 -= 5;
        }
        sub_6F72F480("Gamma: %i", v25);
      }
      if ( dword_6FCFFF68(v0 + 2580, 1) )
      {
        v26 = dword_6FBB5520 + 5;
        if ( dword_6FBB5520 + 5 > 100 )
        {
          dword_6FBB5520 = 100;
          v26 = 100;
        }
        else
        {
          dword_6FBB5520 += 5;
        }
        sub_6F72F480("Gamma: %i", v26);
      }
      if ( dword_6FCFFF68(v0 + 2596, 1) )
      {
        v27 = dword_6FBB5524 - 5;
        if ( dword_6FBB5524 - 5 < -100 )
        {
          dword_6FBB5524 = -100;
          v27 = -100;
        }
        else
        {
          dword_6FBB5524 -= 5;
        }
        sub_6F72F480("Contrast: %i", v27);
      }
      if ( dword_6FCFFF68(v0 + 2612, 1) )
      {
        v28 = dword_6FBB5524 + 5;
        if ( dword_6FBB5524 + 5 > 100 )
        {
          dword_6FBB5524 = 100;
          v28 = 100;
        }
        else
        {
          dword_6FBB5524 += 5;
        }
        sub_6F72F480("Contrast: %i", v28);
      }
      if ( dword_6FCFFF68(v0 + 2628, 1) )
      {
        v29 = dword_6FBB5538 + 1;
        if ( dword_6FBB5538 + 1 > 3 )
          v29 = 0;
        dword_6FBB5538 = v29;
        if ( !byte_6FD40C80 && sub_6F9624B0((int)&byte_6FD40C80) )
        {
          sub_6F695280(dword_6FD40C20, "0*");
          sub_6F695280(&unk_6FD40C38, "90*");
          sub_6F695280(&unk_6FD40C50, "180*");
          sub_6F695280(&unk_6FD40C68, "270*");
          sub_6F962670((int)&byte_6FD40C80);
          sub_6F6813F0((int)sub_6F694010);
        }
        sub_6F72F480("Screen rotated on: \"%s\"", dword_6FD40C20[6 * dword_6FBB5538]);
      }
      if ( dword_6FCFFF68(v0 + 2644, 1) )
      {
        if ( flt_6FBB7574 < -99.5 )
        {
          v30 = -100.0;
          flt_6FBB7574 = -100.0;
        }
        else
        {
          v30 = flt_6FBB7574 - 0.5;
          flt_6FBB7574 = v30;
        }
        sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v30), (_DWORD)(*(unsigned __int64 *)&v30 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2660, 1) )
      {
        if ( flt_6FBB7574 > 99.5 )
        {
          v31 = 100.0;
          flt_6FBB7574 = 100.0;
        }
        else
        {
          v31 = flt_6FBB7574 + 0.5;
          flt_6FBB7574 = v31;
        }
        sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v31), (_DWORD)(*(unsigned __int64 *)&v31 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2676, 1) )
      {
        if ( flt_6FBB7578 < -99.5 )
        {
          v32 = -100.0;
          flt_6FBB7578 = -100.0;
        }
        else
        {
          v32 = flt_6FBB7578 - 0.5;
          flt_6FBB7578 = v32;
        }
        sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v32), (_DWORD)(*(unsigned __int64 *)&v32 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2692, 1) )
      {
        if ( flt_6FBB7578 > 99.5 )
        {
          v33 = 100.0;
          flt_6FBB7578 = 100.0;
        }
        else
        {
          v33 = flt_6FBB7578 + 0.5;
          flt_6FBB7578 = v33;
        }
        sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v33), (_DWORD)(*(unsigned __int64 *)&v33 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2708, 1) )
      {
        if ( flt_6FBB7584 < -99.5 )
        {
          v34 = -100.0;
          flt_6FBB7584 = -100.0;
        }
        else
        {
          v34 = flt_6FBB7584 - 0.5;
          flt_6FBB7584 = v34;
        }
        sub_6F72F480("Screen width: %.1f%s", LODWORD(v34), (_DWORD)(*(unsigned __int64 *)&v34 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2724, 1) )
      {
        if ( flt_6FBB7584 > 99.5 )
        {
          v35 = 100.0;
          flt_6FBB7584 = 100.0;
        }
        else
        {
          v35 = flt_6FBB7584 + 0.5;
          flt_6FBB7584 = v35;
        }
        sub_6F72F480("Screen width: %.1f%s", LODWORD(v35), (_DWORD)(*(unsigned __int64 *)&v35 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2740, 1) )
      {
        if ( flt_6FBB7588 < -99.5 )
        {
          v36 = -100.0;
          flt_6FBB7588 = -100.0;
        }
        else
        {
          v36 = flt_6FBB7588 - 0.5;
          flt_6FBB7588 = v36;
        }
        sub_6F72F480("Screen height: %.1f%s", LODWORD(v36), (_DWORD)(*(unsigned __int64 *)&v36 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2756, 1) )
      {
        if ( flt_6FBB7588 > 99.5 )
        {
          v37 = 100.0;
          flt_6FBB7588 = 100.0;
        }
        else
        {
          v37 = flt_6FBB7588 + 0.5;
          flt_6FBB7588 = v37;
        }
        sub_6F72F480("Screen height: %.1f%s", LODWORD(v37), (_DWORD)(*(unsigned __int64 *)&v37 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2772, 1) )
      {
        v38 = "flipped horizontally";
        if ( dword_6FBB757C == 1 )
          v38 = "not flipped horizontally";
        dword_6FBB757C ^= 1u;
        sub_6F72F480("Screen %s", v38);
      }
      if ( dword_6FCFFF68(v0 + 2788, 1) )
      {
        v39 = "flipped vertically";
        if ( dword_6FBB7580 == 1 )
          v39 = "not flipped vertically";
        dword_6FBB7580 ^= 1u;
        sub_6F72F480("Screen %s", v39);
      }
      if ( dword_6FCFFF68(v0 + 2804, 1) )
      {
        if ( flt_6FBB758C < -9.5 )
        {
          v40 = -10.0;
          flt_6FBB758C = -10.0;
        }
        else
        {
          v40 = flt_6FBB758C - 0.5;
          flt_6FBB758C = v40;
        }
        sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v40), (_DWORD)(*(unsigned __int64 *)&v40 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2820, 1) )
      {
        if ( flt_6FBB758C > 9.5 )
        {
          v41 = 10.0;
          flt_6FBB758C = 10.0;
        }
        else
        {
          v41 = flt_6FBB758C + 0.5;
          flt_6FBB758C = v41;
        }
        sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v41), (_DWORD)(*(unsigned __int64 *)&v41 >> 32), "%%");
      }
      if ( dword_6FCFFF68(v0 + 2820, 1) )
      {
        dword_6FBB551C = 0;
        flt_6FBB7574 = 0.0;
        flt_6FBB7578 = 0.0;
        flt_6FBB7584 = 0.0;
        dword_6FBB5520 = 0;
        dword_6FBB5524 = 0;
        dword_6FBB5538 = 0;
        dword_6FBB757C = 0;
        dword_6FBB7580 = 0;
        flt_6FBB7588 = 0.0;
        flt_6FBB758C = 0.0;
      }
      if ( dword_6FCFFF68(v0 + 2852, 1) )
      {
        v42 = dword_6FBB553C + 1;
        if ( dword_6FBB553C + 1 > 2 )
          v42 = 0;
        dword_6FBB553C = v42;
        sub_6F733910();
        sub_6F733910();
        if ( !byte_6FD40C08 && sub_6F9624B0((int)&byte_6FD40C08) )
        {
          sub_6F695280(dword_6FD40BC0, "Standard");
          sub_6F695280(&unk_6FD40BD8, "Quad");
          sub_6F695280(&unk_6FD40BF0, "Perspective-corrected");
          sub_6F962670((int)&byte_6FD40C08);
          sub_6F6813F0((int)sub_6F694050);
        }
        sub_6F72F480("Polygon renderer was changed to: %s", dword_6FD40BC0[6 * dword_6FBB553C]);
      }
      if ( dword_6FCFFF68(v0 + 2868, 1) )
      {
        sub_6F733910();
        dword_6FBB5540 ^= 1u;
        v61 = "enabled";
        sub_6F733910();
        if ( !dword_6FBB5540 )
          v61 = "disabled";
        sub_6F72F480("Gte accuracy: %s", v61);
      }
      if ( dword_6FCFFF68(v0 + 2884, 1) )
      {
        sub_6F733910();
        dword_6FBB5544 ^= 1u;
        v60 = "enabled";
        sub_6F733910();
        if ( !dword_6FBB5544 )
          v60 = "disabled";
        sub_6F72F480("Tesselation: %s", v60);
      }
      if ( dword_6FCFFF68(v0 + 2900, 1) )
      {
        sub_6F697000();
        v59 = "enabled";
        LODWORD(qword_6FBB554C) = qword_6FBB554C ^ 1;
        sub_6F6989C0();
        if ( !(_DWORD)qword_6FBB554C )
          v59 = "disabled";
        sub_6F72F480("Texture replacement collect: %s", v59);
      }
      if ( dword_6FCFFF68(v0 + 2916, 1) )
      {
        sub_6F697000();
        HIDWORD(qword_6FBB554C) ^= 1u;
        sub_6F6989C0();
        v58 = "enabled";
        if ( !HIDWORD(qword_6FBB554C) )
          v58 = "disabled";
        sub_6F72F480("Texture replacement replace: %s", v58);
      }
      if ( dword_6FCFFF68(v0 + 2932, 1) )
      {
        v43 = dword_6FBB9558 + 1;
        if ( dword_6FBB9558 + 1 > 7 )
          v43 = 0;
        dword_6FBB9558 = v43;
        if ( !byte_6FD40BA0 && sub_6F9624B0((int)&byte_6FD40BA0) )
        {
          sub_6F695280(dword_6FD40AE0, "Standard");
          sub_6F695280(&unk_6FD40AF8, "Wired");
          sub_6F695280(&unk_6FD40B10, "Point");
          sub_6F695280(&unk_6FD40B28, "Non-textured");
          sub_6F695280(&unk_6FD40B40, "Non-textured+Wired");
          sub_6F695280(&unk_6FD40B58, "Non-textured+Point");
          sub_6F695280(&unk_6FD40B70, "Standard+Wired");
          sub_6F695280(dword_6FD40B88, "Standard+Point");
          sub_6F962670((int)&byte_6FD40BA0);
          sub_6F6813F0((int)sub_6F694090);
        }
        sub_6F72F480("Rendering mode: %s", dword_6FD40AE0[6 * dword_6FBB9558]);
      }
      if ( dword_6FCFFF68(v0 + 2948, 1) )
      {
        v44 = dword_6FBB955C + 1;
        if ( dword_6FBB955C + 1 > 2 )
          v44 = 0;
        dword_6FBB955C = v44;
        if ( !byte_6FD40AC8 && sub_6F9624B0((int)&byte_6FD40AC8) )
        {
          sub_6F695280(dword_6FD40A80, "Standard");
          sub_6F695280(&unk_6FD40A98, "Order");
          sub_6F695280(&unk_6FD40AB0, "White");
          sub_6F962670((int)&byte_6FD40AC8);
          sub_6F6813F0((int)sub_6F6940E0);
        }
        sub_6F72F480("Wired rendering mode: %s", dword_6FD40A80[6 * dword_6FBB955C]);
      }
      if ( dword_6FCFFF68(v0 + 2964, 1) )
      {
        v45 = dword_6FBB9560 + 1;
        if ( dword_6FBB9560 + 1 > 2 )
          v45 = 0;
        dword_6FBB9560 = v45;
        if ( !byte_6FD40A68 && sub_6F9624B0((int)&byte_6FD40A68) )
        {
          sub_6F695280(dword_6FD40A20, "Standard");
          sub_6F695280(&unk_6FD40A38, "Order");
          sub_6F695280(&unk_6FD40A50, "White");
          sub_6F962670((int)&byte_6FD40A68);
          sub_6F6813F0((int)sub_6F694120);
        }
        sub_6F72F480("Point rendering mode: %s", dword_6FD40A20[6 * dword_6FBB9560]);
      }
      if ( dword_6FCFFF68(v0 + 2980, 1) )
      {
        v46 = dword_6FBB9564 + 1;
        if ( dword_6FBB9564 + 1 > 1 )
          v46 = 0;
        dword_6FBB9564 = v46;
        if ( !byte_6FD40A10 && sub_6F9624B0((int)&byte_6FD40A10) )
        {
          sub_6F695280(dword_6FD409E0, "Standard");
          sub_6F695280(&dword_6FD409F8, "Order");
          sub_6F962670((int)&byte_6FD40A10);
          sub_6F6813F0((int)sub_6F694160);
        }
        sub_6F72F480("Nontextured rendering mode: %s", dword_6FD409E0[6 * dword_6FBB9564]);
      }
      if ( dword_6FCFFF68(v0 + 2996, 1) )
      {
        v47 = dword_6FBB9568 + 1;
        if ( dword_6FBB9568 + 1 > 1 )
          v47 = 0;
        dword_6FBB9568 = v47;
        sub_6F6A8040();
        if ( !byte_6FD409D0 && sub_6F9624B0((int)&byte_6FD409D0) )
        {
          sub_6F695280(dword_6FD409A0, "Standard");
          sub_6F695280(&dword_6FD409B8, "Test");
          sub_6F962670((int)&byte_6FD409D0);
          sub_6F6813F0((int)sub_6F6941A0);
        }
        sub_6F72F480("Textured rendering mode: %s", dword_6FD409A0[6 * dword_6FBB9568]);
      }
      if ( dword_6FCFFF68(v0 + 3012, 1) )
      {
        v48 = "enabled";
        if ( dword_6FBB9570 == 1 )
          v48 = "disabled";
        dword_6FBB9570 ^= 1u;
        sub_6F72F480("Show drawing process: %s", v48);
      }
      if ( dword_6FCFFF68(v0 + 3028, 1) )
        dword_6FBB50A4 = dword_6FBB50A4 == 0;
      if ( dword_6FCFFF68(v0 + 3044, 1) )
        dword_6FBB50A0 = dword_6FBB50A0 == 0;
      if ( dword_6FCFFF68(v0 + 3060, 1) )
        dword_6FBB509C = dword_6FBB509C == 0;
      if ( dword_6FCFFF68(v0 + 3076, 1) && !dword_6FBB5098 )
        sub_6F753DF0((int)&dword_6FBB5300);
      if ( dword_6FCFFF68(v0 + 3092, 1) )
      {
        if ( dword_6FD400E0 )
          sub_6F753CE0();
        else
          sub_6F755500((int)&dword_6FBB5300);
      }
      if ( dword_6FCFFF68(v0 + 3108, 1) )
      {
        if ( dword_6FBB5078 )
          sub_6F753BD0();
        else
          sub_6F754DD0((int)&dword_6FBB5300);
      }
      if ( dword_6FCFFF68(v0 + 3124, 1) )
      {
        if ( dword_6FBB5094 )
          sub_6F753270();
        else
          sub_6F754690((int)&dword_6FBB5300);
      }
      if ( dword_6FCFFF68(v0 + 3140, 1) )
      {
        if ( dword_6FD400DC )
        {
          dword_6FD400DC = 0;
          sub_6F72F480("Video4 recording stopped");
          if ( dword_6FD400D8 )
          {
            sub_6F88C240(dword_6FD400D8);
            dword_6FD400D8 = 0;
          }
        }
        else
        {
          sub_6F751BF0((int)&dword_6FBB5300);
        }
      }
      if ( dword_6FCFFF68(v0 + 3156, 1) )
        sub_6F756550();
      v0 += 8;
    }
    while ( &dword_6FBB5300 != v0 );
  }
  if ( !dword_6FBB9780 )
  {
LABEL_196:
    sub_6F6A5EA0();
    sub_6F7566C0();
    if ( dword_6FBB5098 )
    {
      v62 = 7;
      sub_6F88DA60(dword_6FD400E4, (char *)&v62, 4u);
      if ( dword_6FBB5098 != 9 )
      {
        ++dword_6FBB5098;
        if ( !dword_6FD400DC )
          goto LABEL_198;
        goto LABEL_225;
      }
      dword_6FBB5098 = 0;
      if ( dword_6FD400E4 )
      {
        sub_6F88C240(dword_6FD400E4);
        dword_6FD400E4 = 0;
      }
    }
    if ( !dword_6FD400DC )
    {
LABEL_198:
      sub_6F734150();
      goto LABEL_199;
    }
LABEL_225:
    v62 = 7;
    sub_6F88DA60(dword_6FD400D8, (char *)&v62, 4u);
    goto LABEL_198;
  }
  if ( dword_6FBB956C <= dword_6F96D008 )
  {
    dword_6F96D008 = 0;
    goto LABEL_196;
  }
  ++dword_6F96D008;
LABEL_199:
  sub_6F734070();
  sub_6F751560();
  return 0;
}
