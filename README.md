# JoyArcadeByMCU
<head>
    <meta charset="utf-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no" />
    <meta name="description" content="" />
    <meta name="author" content="" />
    <!-- Font Awesome icons (free version)-->
    <script src="https://use.fontawesome.com/releases/v5.12.1/js/all.js" crossorigin="anonymous"></script>
    <!-- Google fonts-->
    <link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet" type="text/css" />
    <link href="https://fonts.googleapis.com/css?family=Lato:400,700,400italic,700italic" rel="stylesheet"
        type="text/css" />
    <!-- Core theme CSS (includes Bootstrap)-->
    <link href="css/styles.css" rel="stylesheet" />
</head>

<body id="page-top">
    <!-- Navigation-->
    <nav class="navbar navbar-expand-lg bg-secondary text-uppercase fixed-top" id="mainNav">
        <div class="container">
            <a class="navbar-brand js-scroll-trigger" href="#page-top">MIni project computer programming</a><button
                class="navbar-toggler navbar-toggler-right text-uppercase font-weight-bold bg-primary text-white rounded"
                type="button" data-toggle="collapse" data-target="#navbarResponsive" aria-controls="navbarResponsive"
                aria-expanded="false" aria-label="Toggle navigation">Menu <i class="fas fa-bars"></i></button>
            <div class="collapse navbar-collapse" id="navbarResponsive">
                <ul class="navbar-nav ml-auto">
                    <li class="nav-item mx-0 mx-lg-1"><a class="nav-link py-3 px-0 px-lg-3 rounded js-scroll-trigger"
                            href="#portfolio">About</a></li>
                    <li class="nav-item mx-0 mx-lg-1"><a class="nav-link py-3 px-0 px-lg-3 rounded js-scroll-trigger"
                            href="#about">Source code</a></li>
                    <li class="nav-item mx-0 mx-lg-1"><a class="nav-link py-3 px-0 px-lg-3 rounded js-scroll-trigger"
                            href="#contact">member</a></li>
                </ul>
            </div>
        </div>
    </nav>
    <!-- Masthead-->
    <header class="masthead bg-primary text-white text-center">
        <div class="container d-flex align-items-center flex-column">
            <!-- Masthead Avatar Image--><img class="masthead-avatar mb-5"
                src="data:image/png;base64,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"
                alt="" /><!-- Masthead Heading-->
            <h1 class="masthead-heading text-uppercase mb-0">Joy arcade</h1>
            <!-- Icon Divider-->
            <div class="divider-custom divider-light">
                <div class="divider-custom-line"></div>

                <div class="divider-custom-line"></div>
            </div>
            <!-- Masthead Subheading-->
            <p class="masthead-subheading font-weight-light mb-0">made by MCU</p>
        </div>
    </header>
    <!-- about Section-->
    <section class="page-section portfolio" id="portfolio">
        <div class="container">
            <!-- Portfolio Section Heading-->
            <h2 class="page-section-heading text-center text-uppercase text-secondary mb-0">about</h2>
            Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
        </div>
    </section>
    <!-- source code Section-->
    <section class="page-section bg-primary text-white mb-0" id="about">
        <div class="container">

            <h2 class="page-section-heading text-center text-uppercase text-secondary mb-0">Source code</h2><br>
            <div class="container">
                <div class="row">
                    <div class="col-12">
                        It is a long established fact that a reader will be distracted by the readable content of a page
                        when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less normal
                        distribution of letters, as opposed to using 'Content here, content here', making it look like
                        readable English. Many desktop publishing packages and web page editors now use Lorem Ipsum as
                        their default model text, and a search for 'lorem ipsum' will uncover many web sites still in
                        their infancy. Various versions have evolved over the years, sometimes by accident, sometimes on
                        purpose (injected humour and the like).


                    </div>
                </div>
            </div>


            <div class="text-center mt-4">
                <a class="btn btn-xl btn-outline-light" href="https://startbootstrap.com/themes/freelancer/"><i
                        class="fas fa-download mr-2"></i> Download!</a>
            </div>
        </div>
    </section>
    <!-- member Section-->
    <section class="page-section" id="contact">
        <div class="container">
            <!-- Contact Section Heading-->
            <h2 class="page-section-heading text-center text-uppercase text-secondary mb-0">member</h2><br>
            <div id="member" class="row">
                <div class="col-6">
                    <img src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQQAAAC0CAYAAABytVLLAAAIvklEQVR4Xu3aO4sUaxAG4FbxgiAIJpoZGGmm/v9foCaikYGaaOIFRPGCnkMP5xv69M7MqbXcw1D1mO361UzXU91v3/bc+/fv/5r8I0CAwDRN5wSC/YAAgSEgEOwLBAhsBQSCnYEAAYFgHyBA4KSAKwR7BQECrhDsAwQIuEKwDxAgcEDALYPdgwABtwz2AQIE3DLYBwgQcMtgHyBAICLgGUJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJT+5zWPHj2aPn78uP3WW7duTffu3fvXVrx8+XJ68eLFwTXPnj2b3rx5s1lz/vz56e7du9PNmzd/q5u3b99Oz58/n65cuTI9ePBgunz58vZz1tty9erVE2s+ffo0PXnyZPrx48em7vr169PDhw9/a1sUnZ2AQDg721N/8rdv36bHjx9PX758OVG7DIX1ATgW37lzZ7p9+/bmx2UYjP//3VBYbtf6YN+3Lct16zAY2yMUTr2LnHmBQDhz4vgXjLPwXDHO5uPAvnjx4nT//v3Nh81n2p8/f27XjCuKcYAtD8A5JOYwGUGz62rj0BaObfr169dm2ToQxneP33/48GFzJbGrh7FmvmqZr25GT9euXYsjWXmmAgLhTHlP9+Hj4F8edOOAvHDhwiYQPn/+vPfSfXzbOGsvD7jxu/HZT58+3dyWjJ/n2hEaI1iWZ//5FmG+UtgXCCNoImG0vOJYXtWcTsvqsxAQCGeh+gc/cx0S4+w6n1Xnq4Rxe7E8sNYH/3wwr0NiBMt85p9r55/nz16HyKtXrzZB9O7du81ZfR0I+7ZvfM6lS5e2QTO2cRkIp71i+YO0PmqHgEA44t1iebk+DpxdzwZGC+OAi1xpzIGy67P2nbF3hcz43vVD0OWzivUVw3jGMWoEwnHtgALhuOax3ZplGCzPyuMgXh506/v4+Uw+n+0P3XrMgbB+iHnoId++QNj3wHDfLYRAONId7p/NEghHOJ9lGKwfvEVuB16/fn0iEHY9V5hbX14lHLqf3xcI//VA88aNG9vXjW4ZjnBnW22SQDiyGS3PuLve5+86MNcPHsf9/qGHivNzhfUbhENP/Xd9b+R2YA6B9RsODxWPbKdbbI5AOKLZLA+UfQfnroNwfcvw/fv3E2flXffs43fLB5T7bht2BcJye3e98lw/91i/mhxvTrx2PJ6dUCAczyy2bwJ2bdIyIPY9WDzNHyaNA3w8i/j69ev2Lx933Trsu2XYty3L7fWHSUe0k/3HpgiEI5rV+mn9ctP2PUtYv2FY1uz70+XlAbp8yj++f9fVyaG3DP50+Yh2ouSmCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBQQCElA5QQqCQiEStPUC4GkgEBIAionUElAIFSapl4IJAUEQhJQOYFKAgKh0jT1QiApIBCSgMoJVBIQCJWmqRcCSQGBkARUTqCSgECoNE29EEgKCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBT4G2sFyFRyWkcsAAAAAElFTkSuQmCC"
                        alt="" /><!-- Masthead Heading-->
                    <h3>name</h3>
                    <div class=" mb-3 ">

                        <a class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-facebook-f"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-twitter"></i></a><a
                            class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-linkedin-in"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-dribbble"></i></a>
                    </div>
                </div>
                <div class="col-6">
                    <img class="img-fluid"
                        src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQQAAAC0CAYAAABytVLLAAAIvklEQVR4Xu3aO4sUaxAG4FbxgiAIJpoZGGmm/v9foCaikYGaaOIFRPGCnkMP5xv69M7MqbXcw1D1mO361UzXU91v3/bc+/fv/5r8I0CAwDRN5wSC/YAAgSEgEOwLBAhsBQSCnYEAAYFgHyBA4KSAKwR7BQECrhDsAwQIuEKwDxAgcEDALYPdgwABtwz2AQIE3DLYBwgQcMtgHyBAICLgGUJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJT+5zWPHj2aPn78uP3WW7duTffu3fvXVrx8+XJ68eLFwTXPnj2b3rx5s1lz/vz56e7du9PNmzd/q5u3b99Oz58/n65cuTI9ePBgunz58vZz1tty9erVE2s+ffo0PXnyZPrx48em7vr169PDhw9/a1sUnZ2AQDg721N/8rdv36bHjx9PX758OVG7DIX1ATgW37lzZ7p9+/bmx2UYjP//3VBYbtf6YN+3Lct16zAY2yMUTr2LnHmBQDhz4vgXjLPwXDHO5uPAvnjx4nT//v3Nh81n2p8/f27XjCuKcYAtD8A5JOYwGUGz62rj0BaObfr169dm2ToQxneP33/48GFzJbGrh7FmvmqZr25GT9euXYsjWXmmAgLhTHlP9+Hj4F8edOOAvHDhwiYQPn/+vPfSfXzbOGsvD7jxu/HZT58+3dyWjJ/n2hEaI1iWZ//5FmG+UtgXCCNoImG0vOJYXtWcTsvqsxAQCGeh+gc/cx0S4+w6n1Xnq4Rxe7E8sNYH/3wwr0NiBMt85p9r55/nz16HyKtXrzZB9O7du81ZfR0I+7ZvfM6lS5e2QTO2cRkIp71i+YO0PmqHgEA44t1iebk+DpxdzwZGC+OAi1xpzIGy67P2nbF3hcz43vVD0OWzivUVw3jGMWoEwnHtgALhuOax3ZplGCzPyuMgXh506/v4+Uw+n+0P3XrMgbB+iHnoId++QNj3wHDfLYRAONId7p/NEghHOJ9lGKwfvEVuB16/fn0iEHY9V5hbX14lHLqf3xcI//VA88aNG9vXjW4ZjnBnW22SQDiyGS3PuLve5+86MNcPHsf9/qGHivNzhfUbhENP/Xd9b+R2YA6B9RsODxWPbKdbbI5AOKLZLA+UfQfnroNwfcvw/fv3E2flXffs43fLB5T7bht2BcJye3e98lw/91i/mhxvTrx2PJ6dUCAczyy2bwJ2bdIyIPY9WDzNHyaNA3w8i/j69ev2Lx933Trsu2XYty3L7fWHSUe0k/3HpgiEI5rV+mn9ctP2PUtYv2FY1uz70+XlAbp8yj++f9fVyaG3DP50+Yh2ouSmCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBQQCElA5QQqCQiEStPUC4GkgEBIAionUElAIFSapl4IJAUEQhJQOYFKAgKh0jT1QiApIBCSgMoJVBIQCJWmqRcCSQGBkARUTqCSgECoNE29EEgKCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBT4G2sFyFRyWkcsAAAAAElFTkSuQmCC"
                        alt="" /><!-- Masthead Heading-->
                    <h3>name</h3>
                    <div class=" mb-3 ">

                        <a class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-facebook-f"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-twitter"></i></a><a
                            class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-linkedin-in"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-dribbble"></i></a>
                    </div>
                </div>

                <div class="col-6">
                    <img class="img-fluid"
                        src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAQQAAAC0CAYAAABytVLLAAAIvklEQVR4Xu3aO4sUaxAG4FbxgiAIJpoZGGmm/v9foCaikYGaaOIFRPGCnkMP5xv69M7MqbXcw1D1mO361UzXU91v3/bc+/fv/5r8I0CAwDRN5wSC/YAAgSEgEOwLBAhsBQSCnYEAAYFgHyBA4KSAKwR7BQECrhDsAwQIuEKwDxAgcEDALYPdgwABtwz2AQIE3DLYBwgQcMtgHyBAICLgGUJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJSsIdBEQCA0GbQ2CUQEBEJEyRoCTQQEQpNBa5NAREAgRJT+5zWPHj2aPn78uP3WW7duTffu3fvXVrx8+XJ68eLFwTXPnj2b3rx5s1lz/vz56e7du9PNmzd/q5u3b99Oz58/n65cuTI9ePBgunz58vZz1tty9erVE2s+ffo0PXnyZPrx48em7vr169PDhw9/a1sUnZ2AQDg721N/8rdv36bHjx9PX758OVG7DIX1ATgW37lzZ7p9+/bmx2UYjP//3VBYbtf6YN+3Lct16zAY2yMUTr2LnHmBQDhz4vgXjLPwXDHO5uPAvnjx4nT//v3Nh81n2p8/f27XjCuKcYAtD8A5JOYwGUGz62rj0BaObfr169dm2ToQxneP33/48GFzJbGrh7FmvmqZr25GT9euXYsjWXmmAgLhTHlP9+Hj4F8edOOAvHDhwiYQPn/+vPfSfXzbOGsvD7jxu/HZT58+3dyWjJ/n2hEaI1iWZ//5FmG+UtgXCCNoImG0vOJYXtWcTsvqsxAQCGeh+gc/cx0S4+w6n1Xnq4Rxe7E8sNYH/3wwr0NiBMt85p9r55/nz16HyKtXrzZB9O7du81ZfR0I+7ZvfM6lS5e2QTO2cRkIp71i+YO0PmqHgEA44t1iebk+DpxdzwZGC+OAi1xpzIGy67P2nbF3hcz43vVD0OWzivUVw3jGMWoEwnHtgALhuOax3ZplGCzPyuMgXh506/v4+Uw+n+0P3XrMgbB+iHnoId++QNj3wHDfLYRAONId7p/NEghHOJ9lGKwfvEVuB16/fn0iEHY9V5hbX14lHLqf3xcI//VA88aNG9vXjW4ZjnBnW22SQDiyGS3PuLve5+86MNcPHsf9/qGHivNzhfUbhENP/Xd9b+R2YA6B9RsODxWPbKdbbI5AOKLZLA+UfQfnroNwfcvw/fv3E2flXffs43fLB5T7bht2BcJye3e98lw/91i/mhxvTrx2PJ6dUCAczyy2bwJ2bdIyIPY9WDzNHyaNA3w8i/j69ev2Lx933Trsu2XYty3L7fWHSUe0k/3HpgiEI5rV+mn9ctP2PUtYv2FY1uz70+XlAbp8yj++f9fVyaG3DP50+Yh2ouSmCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBQQCElA5QQqCQiEStPUC4GkgEBIAionUElAIFSapl4IJAUEQhJQOYFKAgKh0jT1QiApIBCSgMoJVBIQCJWmqRcCSQGBkARUTqCSgECoNE29EEgKCIQkoHIClQQEQqVp6oVAUkAgJAGVE6gkIBAqTVMvBJICAiEJqJxAJQGBUGmaeiGQFBAISUDlBCoJCIRK09QLgaSAQEgCKidQSUAgVJqmXggkBQRCElA5gUoCAqHSNPVCICkgEJKAyglUEhAIlaapFwJJAYGQBFROoJKAQKg0Tb0QSAoIhCSgcgKVBARCpWnqhUBSQCAkAZUTqCQgECpNUy8EkgICIQmonEAlAYFQaZp6IZAUEAhJQOUEKgkIhErT1AuBpIBASAIqJ1BJQCBUmqZeCCQFBEISUDmBSgICodI09UIgKSAQkoDKCVQSEAiVpqkXAkkBgZAEVE6gkoBAqDRNvRBICgiEJKByApUEBEKlaeqFQFJAICQBlROoJCAQKk1TLwSSAgIhCaicQCUBgVBpmnohkBT4G2sFyFRyWkcsAAAAAElFTkSuQmCC"
                        alt="" /><!-- Masthead Heading-->
                    <h3>name</h3>
                    <div class=" mb-5 ">

                        <a class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-facebook-f"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-twitter"></i></a><a
                            class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-linkedin-in"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-dribbble"></i></a>
                    </div>
                </div>
                <div class="col-6">
                    <img class="img-fluid"
                        src="data:image/png;base64,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"
                        alt="" /><!-- Masthead Heading-->
                    <h3>name</h3>
                    <div class=" mb-5 ">

                        <a class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-facebook-f"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-twitter"></i></a><a
                            class="btn btn-outline-dark btn-social mx-1" href="#"><i
                                class="fab fa-fw fa-linkedin-in"></i></a><a class="btn btn-outline-dark btn-social mx-1"
                            href="#"><i class="fab fa-fw fa-dribbble"></i></a>
                    </div>
                </div>

            </div>

        </div>
    </section>
    <!-- Scroll to Top Button (Only visible on small and extra-small screen sizes)-->
    <div class="scroll-to-top d-lg-none position-fixed">
        <a class="js-scroll-trigger d-block text-center text-white rounded" href="#page-top"><i
                class="fa fa-chevron-up"></i></a>
    </div>
    <!-- Portfolio Modals-->
    <!-- Portfolio Modal 1-->
    <div class="portfolio-modal modal fade" id="portfolioModal1" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal1Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Log Cabin</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/cabin.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Portfolio Modal 2-->
    <div class="portfolio-modal modal fade" id="portfolioModal2" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal2Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Tasty Cake</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/cake.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Portfolio Modal 3-->
    <div class="portfolio-modal modal fade" id="portfolioModal3" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal3Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Circus Tent</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/circus.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Portfolio Modal 4-->
    <div class="portfolio-modal modal fade" id="portfolioModal4" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal4Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Controller</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/game.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Portfolio Modal 5-->
    <div class="portfolio-modal modal fade" id="portfolioModal5" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal5Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Locked Safe</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/safe.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Portfolio Modal 6-->
    <div class="portfolio-modal modal fade" id="portfolioModal6" tabindex="-1" role="dialog"
        aria-labelledby="portfolioModal6Label" aria-hidden="true">
        <div class="modal-dialog modal-xl" role="document">
            <div class="modal-content">
                <button class="close" type="button" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true"><i class="fas fa-times"></i></span>
                </button>
                <div class="modal-body text-center">
                    <div class="container">
                        <div class="row justify-content-center">
                            <div class="col-lg-8">
                                <!-- Portfolio Modal - Title-->
                                <h2 class="portfolio-modal-title text-secondary text-uppercase mb-0">Submarine</h2>
                                <!-- Icon Divider-->
                                <div class="divider-custom">
                                    <div class="divider-custom-line"></div>
                                    <div class="divider-custom-icon"><i class="fas fa-star"></i></div>
                                    <div class="divider-custom-line"></div>
                                </div>
                                <!-- Portfolio Modal - Image--><img class="img-fluid rounded mb-5"
                                    src="assets/img/portfolio/submarine.png" alt="" /><!-- Portfolio Modal - Text-->
                                <p class="mb-5">Lorem ipsum dolor sit amet, consectetur adipisicing elit. Mollitia neque
                                    assumenda ipsam nihil, molestias magnam, recusandae quos quis inventore quisquam
                                    velit asperiores, vitae? Reprehenderit soluta, eos quod consequuntur itaque. Nam.
                                </p>
                                <button class="btn btn-primary" href="#" data-dismiss="modal"><i
                                        class="fas fa-times fa-fw"></i>Close Window</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    </div>
    <!-- Bootstrap core JS-->
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/js/bootstrap.bundle.min.js"></script>
    <!-- Third party plugin JS-->
    <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery-easing/1.4.1/jquery.easing.min.js"></script>
    <!-- Contact form JS-->
    <script src="assets/mail/jqBootstrapValidation.js"></script>
    <script src="assets/mail/contact_me.js"></script>
    <!-- Core theme JS-->
    <script src="js/scripts.js"></script>
</body>
