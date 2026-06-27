void ZN_GPUupdateLace()
{
  int *v0; // ebx@15
  int v1; // eax@22
  const char *v2; // ecx@34
  int v3; // eax@48
  int v4; // ecx@53
  signed int v5; // eax@57
  bool v6; // cf@57
  bool v7; // zf@57
  char *v8; // esi@58
  const char *v9; // edi@58
  signed int v10; // ecx@58
  signed int v11; // eax@63
  bool v12; // cf@63
  bool v13; // zf@63
  char *v14; // esi@64
  const char *v15; // edi@64
  signed int v16; // ecx@64
  signed int v17; // eax@68
  signed int v18; // eax@71
  bool v19; // cf@71
  bool v20; // zf@71
  char *v21; // esi@72
  const char *v22; // edi@72
  signed int v23; // ecx@72
  int v24; // eax@76
  int v25; // eax@77
  int v26; // ecx@80
  int v27; // esi@84
  int v28; // edi@88
  int v29; // edx@92
  int v30; // eax@96
  int v31; // ecx@100
  int v32; // esi@104
  double v33; // st7@110
  double v34; // st7@114
  double v35; // st7@118
  double v36; // st7@122
  double v37; // st7@126
  double v38; // st7@130
  double v39; // st7@134
  double v40; // st7@138
  const char *v41; // ecx@141
  const char *v42; // ecx@145
  double v43; // st7@150
  double v44; // st7@154
  int v45; // ecx@159
  int v46; // esi@170
  int v47; // eax@175
  int v48; // edi@180
  int v49; // eax@185
  int v50; // ecx@190
  const char *v51; // esi@195
  const char *v52; // eax@216
  const char *v53; // ecx@219
  signed int v54; // eax@222
  int v55; // edi@247
  const char *v56; // ecx@249
  int v57; // edi@252
  void *v58; // eax@263
  const char *v59; // edi@293
  const char *v60; // [sp+4h] [bp-68h]@2
  int v61; // [sp+10h] [bp-5Ch]@252
  int v62; // [sp+14h] [bp-58h]@11
  int v63; // [sp+18h] [bp-54h]@257
  int v64; // [sp+1Ch] [bp-50h]@257
  const char *v65; // [sp+20h] [bp-4Ch]@257
  void *v66; // [sp+24h] [bp-48h]@257
  void *v67; // [sp+28h] [bp-44h]@257
  const char *v68; // [sp+2Ch] [bp-40h]@257
  int v69; // [sp+30h] [bp-3Ch]@257
  int v70; // [sp+34h] [bp-38h]@257
  void *v71; // [sp+4Ch] [bp-20h]@257

  nullsub_10();
  if ( !dword_6FD412CC )
  {
    sub_6F6A6B20(*(int **)(dword_6FBB51E8 + 40));
    sub_6F731C50();
    if ( dword_6FBBFD7C )
    {
      glDeleteTextures(1, (int)&dword_6FBBFD78);
      dword_6FBBFD70 = 0;
      dword_6FBBFD74 = 0;
      dword_6FBBFD78 = 0;
      dword_6FBBFD7C = 0;
    }
    dword_6FD412CC = 1;
  }
  if ( sub_6F7604A0(0, &dword_6FD400CC) )
  {
    sub_6F75B060();
    v0 = &dword_6FBB52C0;
    while ( !sub_6F75C7C0((int)(v0 + 2228)) )
    {
LABEL_17:
      if ( sub_6F75C7C0((int)(v0 + 2244)) )
        dword_6FBB84D0 ^= 1u;
      if ( sub_6F75C7C0((int)(v0 + 2260)) )
        dword_6FBB84D4 ^= 1u;
      if ( sub_6F75C7C0((int)(v0 + 2276)) )
      {
        v1 = dword_6FBB52EC + 1;
        if ( dword_6FBB52EC + 1 > 2 )
          v1 = 0;
        dword_6FBB52EC = v1;
        if ( !byte_6FD412A8 && sub_6F9624B0((int)&byte_6FD412A8) )
        {
          sub_6F695280(dword_6FD41260, "Disabled");
          sub_6F695280(&unk_6FD41278, "Auto-detection");
          sub_6F695280(&unk_6FD41290, "Manual");
          sub_6F962670((int)&byte_6FD412A8);
          sub_6F6813F0((int)sub_6F693C10);
        }
        sub_6F72F480("Fps limitation changed to \"%s\"", dword_6FD41260[6 * dword_6FBB52EC]);
      }
      if ( sub_6F75C4C0((int)(v0 + 2292)) )
        dword_6FBB9780 = 1;
      if ( sub_6F75CAA0((int)(v0 + 2292)) )
      {
        sub_6F695FF0(dword_6FBB52E4);
        dword_6FBB9780 = 0;
      }
      if ( sub_6F75C7C0((int)(v0 + 2308)) )
      {
        dword_6FBB52C0 ^= 1u;
        sub_6F6961A0();
      }
      if ( sub_6F75C7C0((int)(v0 + 2324)) )
      {
        v55 = dword_6FBB8524;
        dword_6FBB8524 ^= 1u;
        if ( v55 == 1 )
          ShowCursor(1);
        else
          ShowCursor(0);
        v56 = "hidden";
        if ( !dword_6FBB8524 )
          v56 = "showed";
        sub_6F72F480("Cursor was %s", v56);
      }
      if ( sub_6F75C7C0((int)(v0 + 2340)) )
      {
        v2 = "enabled";
        if ( dword_6FBB5518 == 1 )
          v2 = "disabled";
        dword_6FBB5518 ^= 1u;
        sub_6F72F480("Screen bilinear filtering: %s", v2);
      }
      if ( sub_6F75C7C0((int)(v0 + 2356)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2372)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2388)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2404)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2420)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2436)) )
      {
        v3 = dword_6FBB5300 + 1;
        if ( dword_6FBB5300 + 1 > 2 )
          v3 = 0;
        dword_6FBB5300 = v3;
        if ( !byte_6FD41248 && sub_6F9624B0((int)&byte_6FD41248) )
        {
          sub_6F695280(dword_6FD41200, "None");
          sub_6F695280(&unk_6FD41218, "PSX");
          sub_6F695280(&unk_6FD41230, "Improved");
          sub_6F962670((int)&byte_6FD41248);
          sub_6F6813F0((int)sub_6F693C50);
        }
        sub_6F72F480("Dithering method changed to \"%s\"", dword_6FD41200[6 * dword_6FBB5300]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2452)) )
      {
        v4 = dword_6FBB7560 + 1;
        if ( dword_6FBB7560 + 1 > 6 )
          v4 = 0;
        dword_6FBB7560 = v4;
        if ( !byte_6FD411E8 && sub_6F9624B0((int)&byte_6FD411E8) )
        {
          sub_6F695280(dword_6FD41140, "Perfect");
          sub_6F695280(&unk_6FD41158, "Standard");
          sub_6F695280(&unk_6FD41170, "Custom");
          sub_6F695280(&unk_6FD41188, "Full VRAM (4-bit)");
          sub_6F695280(&unk_6FD411A0, "Full VRAM (8-bit)");
          sub_6F695280(&unk_6FD411B8, "Full VRAM (15-bit)");
          sub_6F695280(dword_6FD411D0, "Full VRAM (24-bit)");
          sub_6F962670((int)&byte_6FD411E8);
          sub_6F6813F0((int)sub_6F693C90);
        }
        sub_6F72F480("Visible area mode changed to \"%s\"", dword_6FD41140[6 * dword_6FBB7560]);
      }
      v5 = sub_6F75C7C0((int)(v0 + 2468));
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
          v59 = "enabled";
          if ( dword_6FBB5410 == 1 )
            v59 = "disabled";
          dword_6FBB5410 ^= 1u;
          sub_6F72F480("Shader state: %s", v59);
        }
      }
      if ( sub_6F75C7C0((int)(v0 + 2484)) )
      {
        v54 = dword_6FBBDB50;
        if ( dword_6FBBDB50 > 0 )
        {
          if ( dword_6FBBDADC )
          {
            glDeleteTextures(1, (int)dword_6FBBDAD8);
            v54 = dword_6FBBDB50;
            dword_6FBBDAD0[0] = 0;
            dword_6FBBDAD4 = 0;
            dword_6FBBDAD8[0] = 0;
            dword_6FBBDADC = 0;
          }
          if ( v54 > 1 )
          {
            if ( dword_6FBBDAEC )
            {
              glDeleteTextures(1, (int)&dword_6FBBDAE8);
              v54 = dword_6FBBDB50;
              dword_6FBBDAE0 = 0;
              dword_6FBBDAE4 = 0;
              dword_6FBBDAE8 = 0;
              dword_6FBBDAEC = 0;
            }
            if ( v54 > 2 )
            {
              if ( dword_6FBBDAFC )
              {
                glDeleteTextures(1, (int)&dword_6FBBDAF8);
                v54 = dword_6FBBDB50;
                dword_6FBBDAF0 = 0;
                dword_6FBBDAF4 = 0;
                dword_6FBBDAF8 = 0;
                dword_6FBBDAFC = 0;
              }
              if ( v54 > 3 )
              {
                if ( dword_6FBBDB0C )
                {
                  glDeleteTextures(1, (int)&dword_6FBBDB08);
                  v54 = dword_6FBBDB50;
                  dword_6FBBDB00 = 0;
                  dword_6FBBDB04 = 0;
                  dword_6FBBDB08 = 0;
                  dword_6FBBDB0C = 0;
                }
                if ( v54 > 4 )
                {
                  if ( dword_6FBBDB1C )
                  {
                    glDeleteTextures(1, (int)&dword_6FBBDB18);
                    v54 = dword_6FBBDB50;
                    dword_6FBBDB10 = 0;
                    dword_6FBBDB14 = 0;
                    dword_6FBBDB18 = 0;
                    dword_6FBBDB1C = 0;
                  }
                  if ( v54 > 5 )
                  {
                    if ( dword_6FBBDB2C )
                    {
                      glDeleteTextures(1, (int)&dword_6FBBDB28);
                      v54 = dword_6FBBDB50;
                      dword_6FBBDB20 = 0;
                      dword_6FBBDB24 = 0;
                      dword_6FBBDB28 = 0;
                      dword_6FBBDB2C = 0;
                    }
                    if ( v54 > 6 )
                    {
                      if ( dword_6FBBDB3C )
                      {
                        glDeleteTextures(1, (int)&dword_6FBBDB38);
                        v54 = dword_6FBBDB50;
                        dword_6FBBDB30 = 0;
                        dword_6FBBDB34 = 0;
                        dword_6FBBDB38 = 0;
                        dword_6FBBDB3C = 0;
                      }
                      if ( v54 > 7 && dword_6FBBDB4C )
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
        sub_6F72F480("Shader is reloaded", v60);
      }
      v11 = sub_6F75C7C0((int)(v0 + 2500));
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
          v17 = dword_6FBB5514;
          if ( dword_6FBB5514 - 1 < 0 )
          {
            dword_6FBB5514 = 0;
            v17 = 1;
          }
          else
          {
            --dword_6FBB5514;
          }
          sub_6F72F480("Shader level: %i", v17);
        }
      }
      v18 = sub_6F75C7C0((int)(v0 + 2516));
      v19 = 0;
      v20 = v18 == 0;
      if ( v18 )
      {
        v21 = &byte_6FBB5414;
        v22 = "Disabled";
        v23 = 9;
        do
        {
          if ( !v23 )
            break;
          v19 = (unsigned __int8)*v21 < *v22;
          v20 = *v21++ == *v22++;
          --v23;
        }
        while ( v20 );
        if ( (!v19 && !v20) != v19 )
        {
          v24 = dword_6FBB5514;
          if ( dword_6FBB5514 + 1 > 3 )
          {
            dword_6FBB5514 = 3;
            v25 = 4;
          }
          else
          {
            ++dword_6FBB5514;
            v25 = v24 + 2;
          }
          sub_6F72F480("Shader level: %i", v25);
        }
      }
      if ( sub_6F75C7C0((int)(v0 + 2532)) )
      {
        v26 = dword_6FBB551C - 5;
        if ( dword_6FBB551C - 5 < -100 )
        {
          dword_6FBB551C = -100;
          v26 = -100;
        }
        else
        {
          dword_6FBB551C -= 5;
        }
        sub_6F72F480("Brightness: %i", v26);
      }
      if ( sub_6F75C7C0((int)(v0 + 2548)) )
      {
        v27 = dword_6FBB551C + 5;
        if ( dword_6FBB551C + 5 > 100 )
        {
          dword_6FBB551C = 100;
          v27 = 100;
        }
        else
        {
          dword_6FBB551C += 5;
        }
        sub_6F72F480("Brightness: %i", v27);
      }
      if ( sub_6F75C7C0((int)(v0 + 2564)) )
      {
        v28 = dword_6FBB5520 - 5;
        if ( dword_6FBB5520 - 5 < -100 )
        {
          dword_6FBB5520 = -100;
          v28 = -100;
        }
        else
        {
          dword_6FBB5520 -= 5;
        }
        sub_6F72F480("Gamma: %i", v28);
      }
      if ( sub_6F75C7C0((int)(v0 + 2580)) )
      {
        v29 = dword_6FBB5520 + 5;
        if ( dword_6FBB5520 + 5 > 100 )
        {
          dword_6FBB5520 = 100;
          v29 = 100;
        }
        else
        {
          dword_6FBB5520 += 5;
        }
        sub_6F72F480("Gamma: %i", v29);
      }
      if ( sub_6F75C7C0((int)(v0 + 2596)) )
      {
        v30 = dword_6FBB5524 - 5;
        if ( dword_6FBB5524 - 5 < -100 )
        {
          dword_6FBB5524 = -100;
          v30 = -100;
        }
        else
        {
          dword_6FBB5524 -= 5;
        }
        sub_6F72F480("Contrast: %i", v30);
      }
      if ( sub_6F75C7C0((int)(v0 + 2612)) )
      {
        v31 = dword_6FBB5524 + 5;
        if ( dword_6FBB5524 + 5 > 100 )
        {
          dword_6FBB5524 = 100;
          v31 = 100;
        }
        else
        {
          dword_6FBB5524 += 5;
        }
        sub_6F72F480("Contrast: %i", v31);
      }
      if ( sub_6F75C7C0((int)(v0 + 2628)) )
      {
        v32 = dword_6FBB5538 + 1;
        if ( dword_6FBB5538 + 1 > 3 )
          v32 = 0;
        dword_6FBB5538 = v32;
        if ( !byte_6FD41120 && sub_6F9624B0((int)&byte_6FD41120) )
        {
          sub_6F695280(dword_6FD410C0, "0*");
          sub_6F695280(&unk_6FD410D8, "90*");
          sub_6F695280(&unk_6FD410F0, "180*");
          sub_6F695280(&unk_6FD41108, "270*");
          sub_6F962670((int)&byte_6FD41120);
          sub_6F6813F0((int)sub_6F693CE0);
        }
        sub_6F72F480("Screen rotated on: \"%s\"", dword_6FD410C0[6 * dword_6FBB5538]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2644)) )
      {
        if ( flt_6FBB7574 < -99.5 )
        {
          v33 = -100.0;
          flt_6FBB7574 = -100.0;
        }
        else
        {
          v33 = flt_6FBB7574 - 0.5;
          flt_6FBB7574 = v33;
        }
        sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v33), (_DWORD)(*(unsigned __int64 *)&v33 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2660)) )
      {
        if ( flt_6FBB7574 > 99.5 )
        {
          v34 = 100.0;
          flt_6FBB7574 = 100.0;
        }
        else
        {
          v34 = flt_6FBB7574 + 0.5;
          flt_6FBB7574 = v34;
        }
        sub_6F72F480("Screen offset x: %.1f%s", LODWORD(v34), (_DWORD)(*(unsigned __int64 *)&v34 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2676)) )
      {
        if ( flt_6FBB7578 < -99.5 )
        {
          v35 = -100.0;
          flt_6FBB7578 = -100.0;
        }
        else
        {
          v35 = flt_6FBB7578 - 0.5;
          flt_6FBB7578 = v35;
        }
        sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v35), (_DWORD)(*(unsigned __int64 *)&v35 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2692)) )
      {
        if ( flt_6FBB7578 > 99.5 )
        {
          v36 = 100.0;
          flt_6FBB7578 = 100.0;
        }
        else
        {
          v36 = flt_6FBB7578 + 0.5;
          flt_6FBB7578 = v36;
        }
        sub_6F72F480("Screen offset y: %.1f%s", LODWORD(v36), (_DWORD)(*(unsigned __int64 *)&v36 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2708)) )
      {
        if ( flt_6FBB7584 < -99.5 )
        {
          v37 = -100.0;
          flt_6FBB7584 = -100.0;
        }
        else
        {
          v37 = flt_6FBB7584 - 0.5;
          flt_6FBB7584 = v37;
        }
        sub_6F72F480("Screen width: %.1f%s", LODWORD(v37), (_DWORD)(*(unsigned __int64 *)&v37 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2724)) )
      {
        if ( flt_6FBB7584 > 99.5 )
        {
          v38 = 100.0;
          flt_6FBB7584 = 100.0;
        }
        else
        {
          v38 = flt_6FBB7584 + 0.5;
          flt_6FBB7584 = v38;
        }
        sub_6F72F480("Screen width: %.1f%s", LODWORD(v38), (_DWORD)(*(unsigned __int64 *)&v38 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2740)) )
      {
        if ( flt_6FBB7588 < -99.5 )
        {
          v39 = -100.0;
          flt_6FBB7588 = -100.0;
        }
        else
        {
          v39 = flt_6FBB7588 - 0.5;
          flt_6FBB7588 = v39;
        }
        sub_6F72F480("Screen height: %.1f%s", LODWORD(v39), (_DWORD)(*(unsigned __int64 *)&v39 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2756)) )
      {
        if ( flt_6FBB7588 > 99.5 )
        {
          v40 = 100.0;
          flt_6FBB7588 = 100.0;
        }
        else
        {
          v40 = flt_6FBB7588 + 0.5;
          flt_6FBB7588 = v40;
        }
        sub_6F72F480("Screen height: %.1f%s", LODWORD(v40), (_DWORD)(*(unsigned __int64 *)&v40 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2772)) )
      {
        v41 = "flipped horizontally";
        if ( dword_6FBB757C == 1 )
          v41 = "not flipped horizontally";
        dword_6FBB757C ^= 1u;
        sub_6F72F480("Screen %s", v41);
      }
      if ( sub_6F75C7C0((int)(v0 + 2788)) )
      {
        v42 = "flipped vertically";
        if ( dword_6FBB7580 == 1 )
          v42 = "not flipped vertically";
        dword_6FBB7580 ^= 1u;
        sub_6F72F480("Screen %s", v42);
      }
      if ( sub_6F75C7C0((int)(v0 + 2804)) )
      {
        if ( flt_6FBB758C < -9.5 )
        {
          v43 = -10.0;
          flt_6FBB758C = -10.0;
        }
        else
        {
          v43 = flt_6FBB758C - 0.5;
          flt_6FBB758C = v43;
        }
        sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v43), (_DWORD)(*(unsigned __int64 *)&v43 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2820)) )
      {
        if ( flt_6FBB758C > 9.5 )
        {
          v44 = 10.0;
          flt_6FBB758C = 10.0;
        }
        else
        {
          v44 = flt_6FBB758C + 0.5;
          flt_6FBB758C = v44;
        }
        sub_6F72F480("Screen overscan: %.1f%s", LODWORD(v44), (_DWORD)(*(unsigned __int64 *)&v44 >> 32), "%%");
      }
      if ( sub_6F75C7C0((int)(v0 + 2820)) )
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
      if ( sub_6F75C7C0((int)(v0 + 2852)) )
      {
        v45 = dword_6FBB553C + 1;
        if ( dword_6FBB553C + 1 > 2 )
          v45 = 0;
        dword_6FBB553C = v45;
        sub_6F733910();
        sub_6F733910();
        if ( !byte_6FD410A8 && sub_6F9624B0((int)&byte_6FD410A8) )
        {
          sub_6F695280(dword_6FD41060, "Standard");
          sub_6F695280(&unk_6FD41078, "Quad");
          sub_6F695280(&unk_6FD41090, "Perspective-corrected");
          sub_6F962670((int)&byte_6FD410A8);
          sub_6F6813F0((int)sub_6F693D20);
        }
        sub_6F72F480("Polygon renderer was changed to: %s", dword_6FD41060[6 * dword_6FBB553C]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2868)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2884)) )
        sub_6F72F480("Not implemented", v60);
      if ( sub_6F75C7C0((int)(v0 + 2900)) )
      {
        sub_6F697000();
        LODWORD(qword_6FBB554C) = qword_6FBB554C ^ 1;
        sub_6F6989C0();
        v53 = "enabled";
        if ( !(_DWORD)qword_6FBB554C )
          v53 = "disabled";
        sub_6F72F480("Texture replacement collect: %s", v53);
      }
      if ( sub_6F75C7C0((int)(v0 + 2916)) )
      {
        sub_6F697000();
        HIDWORD(qword_6FBB554C) ^= 1u;
        sub_6F6989C0();
        v52 = "enabled";
        if ( !HIDWORD(qword_6FBB554C) )
          v52 = "disabled";
        sub_6F72F480("Texture replacement replace: %s", v52);
      }
      if ( sub_6F75C7C0((int)(v0 + 2932)) )
      {
        v46 = dword_6FBB9558 + 1;
        if ( dword_6FBB9558 + 1 > 4 )
          v46 = 0;
        dword_6FBB9558 = v46;
        if ( !byte_6FD41040 && sub_6F9624B0((int)&byte_6FD41040) )
        {
          sub_6F695280(dword_6FD40F80, "Standard");
          sub_6F695280(&unk_6FD40F98, "Wired");
          sub_6F695280(&unk_6FD40FB0, "Point");
          sub_6F695280(&unk_6FD40FC8, "Non-textured");
          sub_6F695280(&unk_6FD40FE0, "Non-textured+Wired");
          sub_6F695280(&unk_6FD40FF8, "Non-textured+Point");
          sub_6F695280(&unk_6FD41010, "Standard+Wired");
          sub_6F695280(dword_6FD41028, "Standard+Point");
          sub_6F962670((int)&byte_6FD41040);
          sub_6F6813F0((int)sub_6F693D60);
        }
        sub_6F72F480("Rendering mode: %s", dword_6FD40F80[6 * dword_6FBB9558]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2948)) )
      {
        v47 = dword_6FBB955C + 1;
        if ( dword_6FBB955C + 1 > 2 )
          v47 = 0;
        dword_6FBB955C = v47;
        if ( !byte_6FD40F68 && sub_6F9624B0((int)&byte_6FD40F68) )
        {
          sub_6F695280(dword_6FD40F20, "Standard");
          sub_6F695280(&unk_6FD40F38, "Order");
          sub_6F695280(&unk_6FD40F50, "White");
          sub_6F962670((int)&byte_6FD40F68);
          sub_6F6813F0((int)sub_6F693DB0);
        }
        sub_6F72F480("Wired rendering mode: %s", dword_6FD40F20[6 * dword_6FBB955C]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2964)) )
      {
        v48 = dword_6FBB9560 + 1;
        if ( dword_6FBB9560 + 1 > 2 )
          v48 = 0;
        dword_6FBB9560 = v48;
        if ( !byte_6FD40F08 && sub_6F9624B0((int)&byte_6FD40F08) )
        {
          sub_6F695280(dword_6FD40EC0, "Standard");
          sub_6F695280(&unk_6FD40ED8, "Order");
          sub_6F695280(&unk_6FD40EF0, "White");
          sub_6F962670((int)&byte_6FD40F08);
          sub_6F6813F0((int)sub_6F693DF0);
        }
        sub_6F72F480("Point rendering mode: %s", dword_6FD40EC0[6 * dword_6FBB9560]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2980)) )
      {
        v49 = dword_6FBB9564 + 1;
        if ( dword_6FBB9564 + 1 > 1 )
          v49 = 0;
        dword_6FBB9564 = v49;
        if ( !byte_6FD40EB0 && sub_6F9624B0((int)&byte_6FD40EB0) )
        {
          sub_6F695280(dword_6FD40E80, "Standard");
          sub_6F695280(&dword_6FD40E98, "Order");
          sub_6F962670((int)&byte_6FD40EB0);
          sub_6F6813F0((int)sub_6F693E30);
        }
        sub_6F72F480("Nontextured rendering mode: %s", dword_6FD40E80[6 * dword_6FBB9564]);
      }
      if ( sub_6F75C7C0((int)(v0 + 2996)) )
      {
        v50 = dword_6FBB9568 + 1;
        if ( dword_6FBB9568 + 1 > 1 )
          v50 = 0;
        dword_6FBB9568 = v50;
        sub_6F6A8040();
        if ( !byte_6FD40E70 && sub_6F9624B0((int)&byte_6FD40E70) )
        {
          sub_6F695280(dword_6FD40E40, "Standard");
          sub_6F695280(&dword_6FD40E58, "Test");
          sub_6F962670((int)&byte_6FD40E70);
          sub_6F6813F0((int)sub_6F693E70);
        }
        sub_6F72F480("Textured rendering mode: %s", dword_6FD40E40[6 * dword_6FBB9568]);
      }
      if ( sub_6F75C7C0((int)(v0 + 3012)) )
      {
        v51 = "enabled";
        if ( dword_6FBB9570 == 1 )
          v51 = "disabled";
        dword_6FBB9570 ^= 1u;
        sub_6F72F480("Show drawing process: %s", v51);
      }
      if ( sub_6F75C7C0((int)(v0 + 3028)) )
        dword_6FBB50A4 = dword_6FBB50A4 == 0;
      if ( sub_6F75C7C0((int)(v0 + 3044)) )
        dword_6FBB50A0 = dword_6FBB50A0 == 0;
      if ( sub_6F75C7C0((int)(v0 + 3060)) )
        dword_6FBB509C = dword_6FBB509C == 0;
      if ( sub_6F75C7C0((int)(v0 + 3076)) && !dword_6FBB5098 )
        sub_6F753DF0((int)&dword_6FBB5300);
      if ( sub_6F75C7C0((int)(v0 + 3092)) )
      {
        if ( dword_6FD400E0 )
          sub_6F753CE0();
        else
          sub_6F755500((int)&dword_6FBB5300);
      }
      if ( sub_6F75C7C0((int)(v0 + 3108)) )
      {
        if ( dword_6FBB5078 )
          sub_6F753BD0();
        else
          sub_6F754DD0((int)&dword_6FBB5300);
      }
      if ( sub_6F75C7C0((int)(v0 + 3124)) )
      {
        if ( dword_6FBB5094 )
          sub_6F753270();
        else
          sub_6F754690((int)&dword_6FBB5300);
      }
      if ( sub_6F75C7C0((int)(v0 + 3140)) )
      {
        if ( dword_6FD400DC )
        {
          dword_6FD400DC = 0;
          sub_6F72F480("Video4 recording stopped", v60);
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
      if ( sub_6F75C7C0((int)(v0 + 3156)) )
        sub_6F756550();
      v0 += 8;
      if ( &dword_6FBB5300 == v0 )
        goto LABEL_3;
    }
    v57 = dword_6FBB52C0;
    dword_6FBB52C0 = 0;
    sub_6F6961A0();
    dword_6FBB52C0 = v57;
    sub_6F69CB30(&v61);
    if ( dword_6FD412D0 )
    {
      if ( dword_6F96D018 || (sub_6F693AE0(), dword_6FD412D0) )
      {
        if ( !dword_6F96D01C )
          sub_6F6970F0();
      }
    }
    v63 = 64;
    v64 = 0;
    v67 = &unk_6FB4D5C0;
    v68 = "plugins";
    v70 = 0;
    v65 = "open";
    v66 = dword_6FCFFEFC;
    v69 = 1;
    v62 = 60;
    ShellExecuteExA((SHELLEXECUTEINFOA *)&v62);
    WaitForSingleObject(v71, 0xFFFFFFFF);
    CloseHandle(v71);
    if ( dword_6F96D01C )
    {
      if ( dword_6FD412D0 )
        goto LABEL_261;
      sub_6F69BCD0();
    }
    if ( !dword_6FD412D0 )
    {
LABEL_263:
      v58 = (void *)v61;
      if ( *(_DWORD *)(v61 + 4) == 1 )
      {
        sub_6F69C440(v61);
        v58 = (void *)v61;
      }
      free(v58);
      dword_6FBB5538 = dword_6FD412B8;
      goto LABEL_17;
    }
LABEL_261:
    if ( !dword_6FD412C8 )
    {
      v60 = "[GPU] Open()\n";
      dword_6FD4098C = 13;
      dword_6FBB51DC = 1024;
      dword_6FBB51E0 = 1024;
      dword_6FD40990 = (dword_6FD412BC == 0) + 1;
      dword_6FD40988 = 1023;
      dword_6FD40984 = 1023;
      dword_6FD40980 = dword_6FBB52F4 << 10;
      dword_6FD4097C = dword_6FBB52F8 << 10;
      dword_6FBB5538 = dword_6FD412B8;
      nullsub_10();
      dword_6FD412C8 = 1;
      dword_6F96D018 = 0;
    }
    goto LABEL_263;
  }
LABEL_3:
  if ( !dword_6FBB9780 )
    goto LABEL_7;
  if ( dword_6FBB956C <= dword_6F96D014 )
  {
    dword_6F96D014 = 0;
LABEL_7:
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
          goto LABEL_9;
        goto LABEL_11;
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
LABEL_9:
      sub_6F734150();
      goto LABEL_10;
    }
LABEL_11:
    v62 = 7;
    sub_6F88DA60(dword_6FD400D8, (char *)&v62, 4u);
    goto LABEL_9;
  }
  ++dword_6F96D014;
LABEL_10:
  sub_6F734070();
  sub_6F751560();
}
