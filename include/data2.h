idxint n = 21;
idxint m = 9;
idxint p = 16;
idxint l = 0;
idxint ncones = 3;
pfloat c[21] = {0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 1.000000000000000000e+00};
pfloat h[9] = {0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00};
idxint q[3] = {3, 3, 3};
idxint Gjc[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
idxint Gir[9] = {0, 3, 6, 1, 4, 7, 2, 5, 8};
pfloat Gpr[9] = {-1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00};
idxint Ajc[22] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 15, 18, 20, 22, 24, 26, 28, 30, 33, 36, 37};
idxint Air[37] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 4, 0, 2, 5, 0, 3, 6, 7, 10, 8, 11, 9, 12, 7, 13, 8, 14, 9, 15, 10, 11, 12, 10, 11, 12, 0};
pfloat Apr[37] = {-1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 5.000000000000000000e-01, -5.000000000000000000e-01, 1.000000000000000000e+00, 5.000000000000000000e-01, -5.000000000000000000e-01, 1.000000000000000000e+00, 5.000000000000000000e-01, -5.000000000000000000e-01, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, -1.000000000000000000e+00, 1.000000000000000000e+00, 1.223423696409617456e+00, 6.481488415020935138e-05, 1.396147465679132393e+00, -5.049300550027370216e-01, -1.220710645059544630e+00, 3.516280729698465501e-01, -1.000000000000000000e+00};
pfloat b[16] = {0.000000000000000000e+00, -5.000000000000000000e-01, -5.000000000000000000e-01, -5.000000000000000000e-01, -5.000000000000000000e-01, -5.000000000000000000e-01, -5.000000000000000000e-01, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, 0.000000000000000000e+00, -6.819060927962782293e-01, -1.563864491934100265e+00, 5.210408903288491489e-01};
