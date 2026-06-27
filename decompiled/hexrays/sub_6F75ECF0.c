signed int __cdecl sub_6F75ECF0(int a1)
{
  signed int result; // eax@1
  int *v2; // edx@1
  int v3; // ecx@1

  result = 0;
  v2 = &dword_7025A560[16467 * a1];
  v3 = v2[16464];
  while ( v3 <= 0
       || v2[16448] != result
       && (v3 == 1
        || v2[16449] != result
        && (v3 == 2
         || v2[16450] != result
         && (v3 == 3
          || v2[16451] != result
          && (v3 == 4
           || result != v2[16452]
           && (v3 == 5
            || result != v2[16453]
            && (v3 == 6
             || result != v2[16454]
             && (v3 == 7
              || result != v2[16455]
              && (v3 == 8
               || result != v2[16456]
               && (v3 == 9
                || result != v2[16457]
                && (v3 == 10
                 || result != v2[16458]
                 && (v3 == 11
                  || result != v2[16459]
                  && (v3 == 12
                   || result != v2[16460]
                   && (v3 == 13
                    || result != v2[16461] && (v3 == 14 || result != v2[16462] && (v3 == 15 || result != v2[16463])))))))))))))))
       || v2[16465] && *(&byte_7025A660[65868 * a1] + result) )
  {
    if ( ++result == 65280 )
      return -1;
  }
  return result;
}
